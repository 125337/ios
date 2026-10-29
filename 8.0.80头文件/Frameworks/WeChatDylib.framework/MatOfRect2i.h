@interface MatOfRect2i : Mat
- (id)initWithNativeMat:(Mat *)arg1;
- (id)initWithMat:(id)arg1;
- (id)initWithArray:(id)arg1;
- (void)alloc:(int)arg1;
- (void)fromArray:(id)arg1;
- (id)toArray;
- (int)length;
@end
