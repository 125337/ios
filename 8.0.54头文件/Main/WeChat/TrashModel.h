@interface TrashModel : NSObject <NSCoding>
{
    BOOL _isDynamicTagEnabled; // +0x8
    BOOL _canReEdit; // +0x9
    unsigned int _createTime; // +0xc
    unsigned int _dataItemCreateTime; // +0x10
    unsigned int _likeCnt; // +0x14
    unsigned int _commentCnt; // +0x18
    NSString * _localId; // +0x20
    NSString * _svrId; // +0x28
    NSString * _userName; // +0x30
    NSString * _draftID; // +0x38
    unsigned long long _draftType; // +0x40
    NSString * _content; // +0x48
    NSArray * _imageArray; // +0x50
    SightDraft * _sightDraft; // +0x58
    long long _lastPrivacy; // +0x60
    WCLocationInfo * _poiInfo; // +0x68
    NSArray * _tempSelectContacts; // +0x70
    NSArray * _remindContactUsernames; // +0x78
    NSArray * _lastPostVisibleLabelNames; // +0x80
    NSArray * _lastPostInVisibleLabelNames; // +0x88
    unsigned long long _pasteLength; // +0x90
    WCDataItem * _forwardItem; // +0x98
    NSString * _sessionId; // +0xa0
    WCTimelineExtBean * _extBean; // +0xa8
}
+ (id)fromBuffer:(id)arg1;
+ (id)getSaveRootDir;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getSavePath;
- (void)archiveToFile;
- (BOOL)isDisplayExpired;
- (BOOL)isRecyclableExpired;
- (id)debugDescription;
- (id)localId;
- (void)setLocalId:(id)arg1;
- (id)svrId;
- (void)setSvrId:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)draftID;
- (void)setDraftID:(id)arg1;
- (unsigned long long)draftType;
- (void)setDraftType:(unsigned long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)dataItemCreateTime;
- (void)setDataItemCreateTime:(unsigned int)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)imageArray;
- (void)setImageArray:(id)arg1;
- (id)sightDraft;
- (void)setSightDraft:(id)arg1;
- (long long)lastPrivacy;
- (void)setLastPrivacy:(long long)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (id)tempSelectContacts;
- (void)setTempSelectContacts:(id)arg1;
- (id)remindContactUsernames;
- (void)setRemindContactUsernames:(id)arg1;
- (id)lastPostVisibleLabelNames;
- (void)setLastPostVisibleLabelNames:(id)arg1;
- (id)lastPostInVisibleLabelNames;
- (void)setLastPostInVisibleLabelNames:(id)arg1;
- (unsigned long long)pasteLength;
- (void)setPasteLength:(unsigned long long)arg1;
- (BOOL)isDynamicTagEnabled;
- (void)setIsDynamicTagEnabled:(BOOL)arg1;
- (id)forwardItem;
- (void)setForwardItem:(id)arg1;
- (BOOL)canReEdit;
- (void)setCanReEdit:(BOOL)arg1;
- (unsigned int)likeCnt;
- (void)setLikeCnt:(unsigned int)arg1;
- (unsigned int)commentCnt;
- (void)setCommentCnt:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)extBean;
- (void)setExtBean:(id)arg1;
- (void).cxx_destruct;
@end

