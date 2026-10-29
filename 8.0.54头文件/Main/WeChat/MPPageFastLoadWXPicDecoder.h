@interface MPPageFastLoadWXPicDecoder : NSObject
{
    NSString * _sceneTag; // +0x8
}
- (id)initWithSceneTag:(id)arg1;
- (id)decodePossibleWxPic:(id)arg1 withImageType:(id)arg2;
- (int)convertPicType:(id)arg1;
- (id)contentTypeForData:(id)arg1;
- (id)sceneTag;
- (void)setSceneTag:(id)arg1;
- (void).cxx_destruct;
@end

