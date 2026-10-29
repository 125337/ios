@interface MessageInteractionOption : NSObject
{
    NSString * _type; // +0x8
    NSString * _label; // +0x10
    NSString * _callBackBuf; // +0x18
    NSString * _url; // +0x20
}
+ (id)fromXMLNode:(XmlReaderNode_t *)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)toXMLString;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)_onCallback:(long long)arg1 completion:(id /* block */)arg2;
- (BOOL)isCallbackType;
- (void)onAction:(long long)arg1 completion:(id /* block */)arg2;
- (id)type;
- (void)setType:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)callBackBuf;
- (void)setCallBackBuf:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end
