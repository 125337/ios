@interface WCTempSaveModel : NSObject <NSCoding, NSCopying>
{
    BOOL _isDynamicTagEnabled; // +0x8
    NSString * _content; // +0x10
    NSArray * _imageArray; // +0x18
    SightDraft * _sightDraft; // +0x20
    NSDate * _lastSaveDate; // +0x28
    long long _lastPrivacy; // +0x30
    WCLocationInfo * _poiInfo; // +0x38
    NSArray * _tempSelectContacts; // +0x40
    NSArray * _remindContactUsernames; // +0x48
    NSArray * _lastPostVisibleLabelNames; // +0x50
    NSArray * _lastPostInVisibleLabelNames; // +0x58
    NSString * _sessionID; // +0x60
    unsigned long long _pasteLength; // +0x68
    WCTimelineExtBean * _extBean; // +0x70
    NSString * _postCycleId; // +0x78
    NSArray * _interactContacts; // +0x80
    NSArray * _excludeContacts; // +0x88
    NSArray * _excludeLabelNames; // +0x90
}
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tempSelectContacts;
- (id)interactContacts;
- (id)content;
- (void)setContent:(id)arg1;
- (id)imageArray;
- (void)setImageArray:(id)arg1;
- (id)sightDraft;
- (void)setSightDraft:(id)arg1;
- (id)lastSaveDate;
- (void)setLastSaveDate:(id)arg1;
- (long long)lastPrivacy;
- (void)setLastPrivacy:(long long)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (BOOL)isDynamicTagEnabled;
- (void)setIsDynamicTagEnabled:(BOOL)arg1;
- (void)setTempSelectContacts:(id)arg1;
- (id)remindContactUsernames;
- (void)setRemindContactUsernames:(id)arg1;
- (id)lastPostVisibleLabelNames;
- (void)setLastPostVisibleLabelNames:(id)arg1;
- (id)lastPostInVisibleLabelNames;
- (void)setLastPostInVisibleLabelNames:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (unsigned long long)pasteLength;
- (void)setPasteLength:(unsigned long long)arg1;
- (id)extBean;
- (void)setExtBean:(id)arg1;
- (id)postCycleId;
- (void)setPostCycleId:(id)arg1;
- (void)setInteractContacts:(id)arg1;
- (id)excludeContacts;
- (void)setExcludeContacts:(id)arg1;
- (id)excludeLabelNames;
- (void)setExcludeLabelNames:(id)arg1;
- (void).cxx_destruct;
@end
