@interface MPImageSugWord39400Snapshot : MMObject
{
    unsigned int _scene; // +0x8
    unsigned int _itemShowType; // +0xc
    unsigned int _bizUin; // +0x10
    unsigned int _msgId; // +0x14
    unsigned int _itemIdx; // +0x18
    long long _sessionId; // +0x20
    long long _enterId; // +0x28
    long long _view; // +0x30
}
- (long long)sessionId;
- (void)setSessionId:(long long)arg1;
- (long long)enterId;
- (void)setEnterId:(long long)arg1;
- (long long)view;
- (void)setView:(long long)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (unsigned int)bizUin;
- (void)setBizUin:(unsigned int)arg1;
- (unsigned int)msgId;
- (void)setMsgId:(unsigned int)arg1;
- (unsigned int)itemIdx;
- (void)setItemIdx:(unsigned int)arg1;
@end
