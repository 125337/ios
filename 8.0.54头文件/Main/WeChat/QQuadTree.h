@interface QQuadTree : NSObject
{
    unsigned long long _bucketCapacity; // +0x8
    QQuadTreeNode * _root; // +0x10
    CGRect _boundingBox; // +0x18
}
+ (id)treeWithDatas:(id)arg1 box:(CGRect)arg2 capacity:(unsigned long long)arg3;
+ (id)treeWithDatas:(id)arg1 box:(CGRect)arg2;
+ (id)treeWithDatas:(id)arg1;
- (BOOL)insertData:(id)arg1;
- (void)enumerateDataInRange:(CGRect)arg1 usingBlock:(id /* block */)arg2;
- (void)traverseUsingBlock:(id /* block */)arg1;
- (id)dataInRange:(CGRect)arg1;
- (id)initWithDatas:(id)arg1 capacity:(unsigned long long)arg2 box:(CGRect)arg3;
- (CGRect)boundingBox;
- (void)setBoundingBox:(CGRect)arg1;
- (unsigned long long)bucketCapacity;
- (void)setBucketCapacity:(unsigned long long)arg1;
- (id)root;
- (void)setRoot:(id)arg1;
- (void).cxx_destruct;
@end

