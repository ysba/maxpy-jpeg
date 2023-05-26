import cv2
from skimage.metrics import structural_similarity

path_ref = "ja_jpeg_top_exact.jpg"

compare_list = [
    # "ja_jpeg_top_k8.jpg",
    # "ja_jpeg_top_k7.jpg",
    # "ja_jpeg_top_k6.jpg",
    "ja_jpeg_top.jpg"
    ]

img_ref = cv2.imread(path_ref, cv2.IMREAD_COLOR)

for path_compare in compare_list:
    img_compare = cv2.imread(path_compare, cv2.IMREAD_COLOR)
    (score, diff) = structural_similarity(img_ref, img_compare, full=True, win_size=1, use_sample_covariance=False)
    print(f"{path_compare} {score:.3f}")
