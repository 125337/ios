@interface YTFaceDetectHelper : NSObject
+ (void)addFaceShapePoint:(vector<tiny_cv::Point_<float>, std::allocator<tiny_cv::Point_<float>>>)arg1 withFacePoints:(void *)arg2;
+ (id)convertFaceFiveShape:(vector<float, std::allocator<float>>)arg1;
+ (vector<float, std::allocator<float>>)convertFaceShape:(void *)arg1;
@end
