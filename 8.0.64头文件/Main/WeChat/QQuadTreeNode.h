@interface QQuadTreeNode : NSObject
{
    unsigned long long _bucketCapacity; // +0x8
    QQuadTreeNode * _northWest; // +0x10
    QQuadTreeNode * _northEast; // +0x18
    QQuadTreeNode * _southWest; // +0x20
    QQuadTreeNode * _southEast; // +0x28
    NSMutableArray * _nodeDatas; // +0x30
    CGRect _boundingBox; // +0x38
}
+ (id)nodeWithCapacity:(unsigned long long)arg1 box:(CGRect)arg2;
- (void)subdivide;
- (BOOL)insertData:(id)arg1;
- (void)traverseUsingBlock:(id /* block */)arg1;
- (void)enumerateDataInRange:(CGRect)arg1 usingBlock:(id /* block */)arg2;
- (id)dataInRange:(CGRect)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 box:(CGRect)arg2;
- (id)description;
- (unsigned long long)bucketCapacity;
- (void)setBucketCapacity:(unsigned long long)arg1;
- (id)northWest;
- (void)setNorthWest:(id)arg1;
- (id)northEast;
- (void)setNorthEast:(id)arg1;
- (id)southWest;
- (void)setSouthWest:(id)arg1;
- (id)southEast;
- (void)setSouthEast:(id)arg1;
- (CGRect)boundingBox;
- (void)setBoundingBox:(CGRect)arg1;
- (id)nodeDatas;
- (void)setNodeDatas:(id)arg1;
- (void).cxx_destruct;
@end
