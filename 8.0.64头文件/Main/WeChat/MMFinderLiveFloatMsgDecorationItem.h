@interface MMFinderLiveFloatMsgDecorationItem : NSObject
{
    unsigned int _type; // +0x8
    NSString * _url; // +0x10
    NSString * _localFileUrl; // +0x18
}
+ (id)itemFromPBDecoration:(id)arg1;
+ (id)itemFromFreeMsgConfig:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)localFileUrl;
- (void)setLocalFileUrl:(id)arg1;
- (void).cxx_destruct;
@end
