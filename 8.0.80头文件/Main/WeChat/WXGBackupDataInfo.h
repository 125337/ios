@interface WXGBackupDataInfo : NSObject
{
    BOOL _needMedia; // +0x8
    BOOL _fromOldToNew; // +0x9
    BOOL _filterMsgForChatSync; // +0xa
    int _dataInfoSize; // +0xc
    int _limitMsgCount; // +0x10
    long long _startTime; // +0x18
    long long _endTime; // +0x20
    NSString * _sessionName; // +0x28
    NSString * _msgListID; // +0x30
    BakChatMsgList * _bakChatMsgList; // +0x38
    NSMutableArray * _bakChatMsgWrapList; // +0x40
    NSArray * _bigDataArray; // +0x48
    NSArray * _mediaDataArray; // +0x50
    NSArray * _mediaIDArray; // +0x58
    NSString * _nickName; // +0x60
    NSMutableArray * _limitMsgTypeArray; // +0x68
    NSArray * _needMediaTypeArray; // +0x70
    long long _mediaFormatSupport; // +0x78
}
- (id)init;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (long long)endTime;
- (void)setEndTime:(long long)arg1;
- (id)sessionName;
- (void)setSessionName:(id)arg1;
- (id)msgListID;
- (void)setMsgListID:(id)arg1;
- (id)bakChatMsgList;
- (void)setBakChatMsgList:(id)arg1;
- (id)bakChatMsgWrapList;
- (void)setBakChatMsgWrapList:(id)arg1;
- (id)bigDataArray;
- (void)setBigDataArray:(id)arg1;
- (id)mediaDataArray;
- (void)setMediaDataArray:(id)arg1;
- (id)mediaIDArray;
- (void)setMediaIDArray:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (int)dataInfoSize;
- (void)setDataInfoSize:(int)arg1;
- (int)limitMsgCount;
- (void)setLimitMsgCount:(int)arg1;
- (id)limitMsgTypeArray;
- (void)setLimitMsgTypeArray:(id)arg1;
- (BOOL)needMedia;
- (void)setNeedMedia:(BOOL)arg1;
- (id)needMediaTypeArray;
- (void)setNeedMediaTypeArray:(id)arg1;
- (BOOL)fromOldToNew;
- (void)setFromOldToNew:(BOOL)arg1;
- (BOOL)filterMsgForChatSync;
- (void)setFilterMsgForChatSync:(BOOL)arg1;
- (long long)mediaFormatSupport;
- (void)setMediaFormatSupport:(long long)arg1;
- (void).cxx_destruct;
@end
