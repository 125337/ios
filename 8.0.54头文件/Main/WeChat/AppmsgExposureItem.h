@interface AppmsgExposureItem : NSObject
{
    unsigned int _scene; // +0x8
    unsigned int _createTime; // +0xc
    unsigned int _currSessionID; // +0x10
    NSString * _innerID; // +0x18
    NSString * _chatName; // +0x20
    NSArray * _urlInfoList; // +0x28
    NSString * _sendUserName; // +0x30
}
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)innerID;
- (void)setInnerID:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)urlInfoList;
- (void)setUrlInfoList:(id)arg1;
- (id)sendUserName;
- (void)setSendUserName:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)currSessionID;
- (void)setCurrSessionID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

