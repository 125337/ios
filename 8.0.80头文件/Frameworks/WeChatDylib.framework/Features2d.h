@interface Features2d : NSObject
+ (void)drawKeypoints:(id)arg1 keypoints:(id)arg2 outImage:(id)arg3 color:(id)arg4 flags:(int)arg5;
+ (void)drawKeypoints:(id)arg1 keypoints:(id)arg2 outImage:(id)arg3 color:(id)arg4;
+ (void)drawKeypoints:(id)arg1 keypoints:(id)arg2 outImage:(id)arg3;
+ (void)drawMatches:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6 matchColor:(id)arg7 singlePointColor:(id)arg8 matchesMask:(id)arg9 flags:(int)arg10;
+ (void)drawMatches:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6 matchColor:(id)arg7 singlePointColor:(id)arg8 matchesMask:(id)arg9;
+ (void)drawMatches:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6 matchColor:(id)arg7 singlePointColor:(id)arg8;
+ (void)drawMatches:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6 matchColor:(id)arg7;
+ (void)drawMatches:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6;
+ (void)drawMatches:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6 matchesThickness:(int)arg7 matchColor:(id)arg8 singlePointColor:(id)arg9 matchesMask:(id)arg10 flags:(int)arg11;
+ (void)drawMatches:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6 matchesThickness:(int)arg7 matchColor:(id)arg8 singlePointColor:(id)arg9 matchesMask:(id)arg10;
+ (void)drawMatches:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6 matchesThickness:(int)arg7 matchColor:(id)arg8 singlePointColor:(id)arg9;
+ (void)drawMatches:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6 matchesThickness:(int)arg7 matchColor:(id)arg8;
+ (void)drawMatches:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6 matchesThickness:(int)arg7;
+ (void)drawMatchesKnn:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6 matchColor:(id)arg7 singlePointColor:(id)arg8 matchesMask:(id)arg9 flags:(int)arg10;
+ (void)drawMatchesKnn:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6 matchColor:(id)arg7 singlePointColor:(id)arg8 matchesMask:(id)arg9;
+ (void)drawMatchesKnn:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6 matchColor:(id)arg7 singlePointColor:(id)arg8;
+ (void)drawMatchesKnn:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6 matchColor:(id)arg7;
+ (void)drawMatchesKnn:(id)arg1 keypoints1:(id)arg2 img2:(id)arg3 keypoints2:(id)arg4 matches1to2:(id)arg5 outImg:(id)arg6;
@end
