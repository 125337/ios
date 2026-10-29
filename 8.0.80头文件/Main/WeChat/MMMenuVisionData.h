@interface MMMenuVisionData : NSObject
{
    NSArray * _items; // +0x8
    NSString * _sceneId; // +0x10
    UIResponder * _responder; // +0x18
    CGRect _showFromRect; // +0x20
}
- (id)items;
- (void)setItems:(id)arg1;
- (CGRect)showFromRect;
- (void)setShowFromRect:(CGRect)arg1;
- (id)sceneId;
- (void)setSceneId:(id)arg1;
- (id)responder;
- (void)setResponder:(id)arg1;
- (void).cxx_destruct;
@end
