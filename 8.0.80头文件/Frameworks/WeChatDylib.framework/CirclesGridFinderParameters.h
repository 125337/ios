@interface CirclesGridFinderParameters : NSObject
{
    Ptr<cv::CirclesGridFinderParameters> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::CirclesGridFinderParameters>)arg1;
- (id)initWithNativePtr:(Ptr<cv::CirclesGridFinderParameters>)arg1;
- (id)init;
- (id)densityNeighborhoodSize;
- (void)setDensityNeighborhoodSize:(id)arg1;
- (float)minDensity;
- (void)setMinDensity:(float)arg1;
- (int)kmeansAttempts;
- (void)setKmeansAttempts:(int)arg1;
- (int)minDistanceToAddKeypoint;
- (void)setMinDistanceToAddKeypoint:(int)arg1;
- (int)keypointScale;
- (void)setKeypointScale:(int)arg1;
- (float)minGraphConfidence;
- (void)setMinGraphConfidence:(float)arg1;
- (float)vertexGain;
- (void)setVertexGain:(float)arg1;
- (float)vertexPenalty;
- (void)setVertexPenalty:(float)arg1;
- (float)existingVertexGain;
- (void)setExistingVertexGain:(float)arg1;
- (float)edgeGain;
- (void)setEdgeGain:(float)arg1;
- (float)edgePenalty;
- (void)setEdgePenalty:(float)arg1;
- (float)convexHullFactor;
- (void)setConvexHullFactor:(float)arg1;
- (float)minRNGEdgeSwitchDist;
- (void)setMinRNGEdgeSwitchDist:(float)arg1;
- (float)squareSize;
- (void)setSquareSize:(float)arg1;
- (float)maxRectifiedDistance;
- (void)setMaxRectifiedDistance:(float)arg1;
- (Ptr<cv::CirclesGridFinderParameters>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
