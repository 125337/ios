@interface MMFlutterSnapshotHelper : NSObject
{
    NSMutableDictionary * _callbackMap; // +0x8
    NSMutableDictionary * _imageMap; // +0x10
    NSMutableDictionary * _offsetMap; // +0x18
    NSMutableDictionary * _showCallbackMap; // +0x20
}
+ (id)instance;
- (id)init;
- (void)waitForTaskId:(int)arg1 callback:(id /* block */)arg2;
- (void)waitForShowTaskId:(int)arg1 callback:(id /* block */)arg2;
- (void)removeTaskId:(int)arg1;
- (void)updateTask:(int)arg1 image:(id)arg2 frame:(CGRect)arg3 contentFrame:(CGRect)arg4;
- (void)updateTask:(int)arg1 offset:(CGPoint)arg2 inScreen:(BOOL)arg3;
- (id)getToOffsetForTask:(int)arg1;
- (void)clearCache;
- (id)callbackMap;
- (void)setCallbackMap:(id)arg1;
- (id)imageMap;
- (void)setImageMap:(id)arg1;
- (id)offsetMap;
- (void)setOffsetMap:(id)arg1;
- (id)showCallbackMap;
- (void)setShowCallbackMap:(id)arg1;
- (void).cxx_destruct;
@end

