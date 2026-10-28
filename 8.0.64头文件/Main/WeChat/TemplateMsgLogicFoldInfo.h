@interface TemplateMsgLogicFoldInfo : NSObject
{
    NSArray * _foldMsgLocalIds; // +0x8
    NSArray * _foldMsgCreatimes; // +0x10
    NSArray * _foldMsgTitles; // +0x18
    CMessageWrap * _messageWrap; // +0x20
    NSString * _clusterId; // +0x28
}
- (id)foldMsgLocalIds;
- (void)setFoldMsgLocalIds:(id)arg1;
- (id)foldMsgCreatimes;
- (void)setFoldMsgCreatimes:(id)arg1;
- (id)foldMsgTitles;
- (void)setFoldMsgTitles:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)clusterId;
- (void)setClusterId:(id)arg1;
- (void).cxx_destruct;
@end
