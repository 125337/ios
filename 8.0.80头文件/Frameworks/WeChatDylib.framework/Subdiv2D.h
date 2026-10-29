@interface Subdiv2D : NSObject
{
    Ptr<cv::Subdiv2D> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::Subdiv2D>)arg1;
+ (int)PTLOC_ERROR;
+ (int)PTLOC_OUTSIDE_RECT;
+ (int)PTLOC_INSIDE;
+ (int)PTLOC_VERTEX;
+ (int)PTLOC_ON_EDGE;
+ (int)NEXT_AROUND_ORG;
+ (int)NEXT_AROUND_DST;
+ (int)PREV_AROUND_ORG;
+ (int)PREV_AROUND_DST;
+ (int)NEXT_AROUND_LEFT;
+ (int)NEXT_AROUND_RIGHT;
+ (int)PREV_AROUND_LEFT;
+ (int)PREV_AROUND_RIGHT;
- (id)initWithNativePtr:(Ptr<cv::Subdiv2D>)arg1;
- (id)init;
- (id)initWithRect:(id)arg1;
- (void)initDelaunay:(id)arg1;
- (int)insert:(id)arg1;
- (void)insertVector:(id)arg1;
- (int)locate:(id)arg1 edge:(int *)arg2 vertex:(int *)arg3;
- (int)findNearest:(id)arg1 nearestPt:(id)arg2;
- (int)findNearest:(id)arg1;
- (void)getEdgeList:(id)arg1;
- (void)getLeadingEdgeList:(id)arg1;
- (void)getTriangleList:(id)arg1;
- (void)getVoronoiFacetList:(id)arg1 facetList:(id)arg2 facetCenters:(id)arg3;
- (id)getVertex:(int)arg1 firstEdge:(int *)arg2;
- (id)getVertex:(int)arg1;
- (int)getEdge:(int)arg1 nextEdgeType:(int)arg2;
- (int)nextEdge:(int)arg1;
- (int)rotateEdge:(int)arg1 rotate:(int)arg2;
- (int)symEdge:(int)arg1;
- (int)edgeOrg:(int)arg1 orgpt:(id)arg2;
- (int)edgeOrg:(int)arg1;
- (int)edgeDst:(int)arg1 dstpt:(id)arg2;
- (int)edgeDst:(int)arg1;
- (Ptr<cv::Subdiv2D>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
