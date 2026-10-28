@interface MPPageFastLoadWXPicDecoder : NSObject
{
    NSString * _sceneTag; // +0x8
}
+ (id)fallbackContentType;
- (id)initWithSceneTag:(id)arg1;
- (BOOL)isWxPicData:(id)arg1;
- (id)decodePossibleWxPic:(id)arg1 withImageType:(id)arg2 error:(id *)arg3;
- (int)convertPicType:(id)arg1;
- (id)contentTypeForData:(id)arg1;
- (id)sceneTag;
- (void)setSceneTag:(id)arg1;
- (void).cxx_destruct;
@end
