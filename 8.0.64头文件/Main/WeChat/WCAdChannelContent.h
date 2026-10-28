@interface WCAdChannelContent : NSObject
{
    int _scene; // +0x8
    NSString * _uxInfo; // +0x10
    NSMutableArray * _adTraceMsgList; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)adTraceMsgList;
- (void)setAdTraceMsgList:(id)arg1;
- (void).cxx_destruct;
@end
