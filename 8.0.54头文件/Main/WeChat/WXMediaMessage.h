@interface WXMediaMessage : NSObject
{
    NSString * title; // +0x8
    NSString * description; // +0x10
    NSData * thumbData; // +0x18
    NSString * mediaTagName; // +0x20
    id mediaObject; // +0x28
    NSString * messageExt; // +0x30
    NSString * messageAction; // +0x38
    NSString * _thumbDataHash; // +0x40
    NSString * _msgSignature; // +0x48
}
+ (id)message;
- (id)init;
- (void)setThumbImage:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)description;
- (void)setDescription:(id)arg1;
- (id)thumbData;
- (void)setThumbData:(id)arg1;
- (id)mediaTagName;
- (void)setMediaTagName:(id)arg1;
- (id)mediaObject;
- (void)setMediaObject:(id)arg1;
- (id)messageExt;
- (void)setMessageExt:(id)arg1;
- (id)messageAction;
- (void)setMessageAction:(id)arg1;
- (id)thumbDataHash;
- (void)setThumbDataHash:(id)arg1;
- (id)msgSignature;
- (void)setMsgSignature:(id)arg1;
- (void).cxx_destruct;
@end

