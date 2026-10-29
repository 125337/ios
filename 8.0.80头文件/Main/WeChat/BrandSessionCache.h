@interface BrandSessionCache : NSObject
{
    BOOL hasNewArrival; // +0x8
    NSString * latestMsgOwner; // +0x10
    unsigned int unreadCount; // +0x18
    BOOL showUnReadAsRedDot; // +0x1c
    unsigned int lastMsgTime; // +0x20
    unsigned int starMsgCount; // +0x24
    unsigned int massSendMsgCount; // +0x28
    unsigned int notifyMsgCount; // +0x2c
    unsigned int notifyFlag; // +0x30
    CMessageWrap * latestMsg; // +0x38
    unsigned int _latestDigestType; // +0x40
    unsigned long long _lastMsgAffMsgId; // +0x48
    BESessionBoxInfo * _affSessionBoxInfo; // +0x50
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)hasNewArrival;
- (void)setHasNewArrival:(BOOL)arg1;
- (id)latestMsgOwner;
- (void)setLatestMsgOwner:(id)arg1;
- (unsigned int)unreadCount;
- (void)setUnreadCount:(unsigned int)arg1;
- (BOOL)showUnReadAsRedDot;
- (void)setShowUnReadAsRedDot:(BOOL)arg1;
- (unsigned int)lastMsgTime;
- (void)setLastMsgTime:(unsigned int)arg1;
- (unsigned int)starMsgCount;
- (void)setStarMsgCount:(unsigned int)arg1;
- (unsigned int)massSendMsgCount;
- (void)setMassSendMsgCount:(unsigned int)arg1;
- (unsigned int)notifyMsgCount;
- (void)setNotifyMsgCount:(unsigned int)arg1;
- (unsigned int)notifyFlag;
- (void)setNotifyFlag:(unsigned int)arg1;
- (id)latestMsg;
- (void)setLatestMsg:(id)arg1;
- (unsigned long long)lastMsgAffMsgId;
- (void)setLastMsgAffMsgId:(unsigned long long)arg1;
- (id)affSessionBoxInfo;
- (void)setAffSessionBoxInfo:(id)arg1;
- (unsigned int)latestDigestType;
- (void)setLatestDigestType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
