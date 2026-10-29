@interface WWKFContentSendMsgInfo : MMObject
{
    int _reportScene; // +0x8
    unsigned int _kefuType; // +0xc
    NSString * _imageUrl; // +0x10
    NSData * _imageData; // +0x18
    NSString * _hintTitle; // +0x20
    NSString * _title; // +0x28
    NSString * _reportType; // +0x30
    NSString * _productID; // +0x38
    NSString * _orderid; // +0x40
    NSString * _kfUserName; // +0x48
    id /* block */ _sendMsgHandler; // +0x50
}
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)hintTitle;
- (void)setHintTitle:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)reportType;
- (void)setReportType:(id)arg1;
- (id)productID;
- (void)setProductID:(id)arg1;
- (id)orderid;
- (void)setOrderid:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (id)kfUserName;
- (void)setKfUserName:(id)arg1;
- (unsigned int)kefuType;
- (void)setKefuType:(unsigned int)arg1;
- (id /* block */)sendMsgHandler;
- (void)setSendMsgHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
