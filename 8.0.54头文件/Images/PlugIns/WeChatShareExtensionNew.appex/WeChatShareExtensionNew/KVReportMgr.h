@interface KVReportMgr : NSObject
{
    unsigned int _action; // +0x8
    unsigned int _scene; // +0xc
    unsigned int _videoSelected; // +0x10
    unsigned int _shareToMoment; // +0x14
    unsigned int _shareToStatus; // +0x18
    NSString * _sessionId; // +0x20
    long long _actionTimestamp; // +0x28
    unsigned long long _picSelected; // +0x30
    NSString * _statusIconId; // +0x38
    NSString * _statusId; // +0x40
    NSString * _bundleId; // +0x48
}
+ (id)sharedInstance;
- (void)setBundleId:(id)arg1;
- (id)sessionId;
- (void)setAction:(unsigned int)arg1;
- (void)report;
- (void)setSessionId:(id)arg1;
- (unsigned int)action;
- (long long)actionTimestamp;
- (void)setActionTimestamp:(long long)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned long long)picSelected;
- (void)setPicSelected:(unsigned long long)arg1;
- (unsigned int)videoSelected;
- (void)setVideoSelected:(unsigned int)arg1;
- (unsigned int)shareToMoment;
- (void)setShareToMoment:(unsigned int)arg1;
- (unsigned int)shareToStatus;
- (void)setShareToStatus:(unsigned int)arg1;
- (id)statusIconId;
- (void)setStatusIconId:(id)arg1;
- (id)statusId;
- (void)setStatusId:(id)arg1;
- (id)bundleId;
- (void).cxx_destruct;
@end

