@interface QuickReplyMsgReporter : NSObject
{
    unsigned int _noticeTimestamp; // +0x8
    unsigned int _noticeType; // +0xc
    unsigned int _accountType; // +0x10
    long long _bizType; // +0x18
    NSString * _bizInfo; // +0x20
    long long _currPage; // +0x28
    NSString * _messageId; // +0x30
    NSString * _messageType; // +0x38
    long long _bannerType; // +0x40
    NSString * _bannerMsg; // +0x48
    NSString * _userName; // +0x50
    NSString * _content; // +0x58
    NSString * _liveId; // +0x60
    NSString * _feedId; // +0x68
}
+ (id)getMessageId:(id)arg1;
+ (id)getMessageType:(id)arg1;
- (id)init;
- (void)reportAction:(long long)arg1;
- (void)reportAction:(long long)arg1 messages:(id)arg2;
- (void)reportWithAction:(long long)arg1 msgId:(id)arg2 msgType:(id)arg3 bannerType:(long long)arg4 bannerMsg:(id)arg5;
- (void)updateWithMessages:(id)arg1;
- (id)getBannerMsg:(id)arg1;
- (long long)getBannerType:(id)arg1;
- (id)getPageName;
- (id)getUserName:(id)arg1;
- (unsigned int)getNoticeTimestamp:(id)arg1;
- (id)getContent:(id)arg1;
- (unsigned int)getAccountType:(id)arg1;
- (unsigned int)getNoticeType:(id)arg1;
- (id)getLiveId:(id)arg1;
- (id)getFeedId:(id)arg1;
- (void)reportSystemConfig;
- (void)reportServiceNotifyBannerWithOpType:(unsigned int)arg1;
- (long long)bizType;
- (void)setBizType:(long long)arg1;
- (id)bizInfo;
- (void)setBizInfo:(id)arg1;
- (long long)currPage;
- (void)setCurrPage:(long long)arg1;
- (id)messageId;
- (void)setMessageId:(id)arg1;
- (id)messageType;
- (void)setMessageType:(id)arg1;
- (long long)bannerType;
- (void)setBannerType:(long long)arg1;
- (id)bannerMsg;
- (void)setBannerMsg:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)noticeTimestamp;
- (void)setNoticeTimestamp:(unsigned int)arg1;
- (unsigned int)noticeType;
- (void)setNoticeType:(unsigned int)arg1;
- (unsigned int)accountType;
- (void)setAccountType:(unsigned int)arg1;
- (id)liveId;
- (void)setLiveId:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (void).cxx_destruct;
@end
