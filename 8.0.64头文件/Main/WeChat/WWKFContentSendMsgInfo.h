@interface WWKFContentSendMsgInfo : MMObject
{
    NSString * _imageUrl; // +0x8
    NSData * _imageData; // +0x10
    NSString * _hintTitle; // +0x18
    id /* block */ _sendMsgHandler; // +0x20
}
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)hintTitle;
- (void)setHintTitle:(id)arg1;
- (id /* block */)sendMsgHandler;
- (void)setSendMsgHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
