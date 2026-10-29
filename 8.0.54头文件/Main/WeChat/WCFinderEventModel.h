@interface WCFinderEventModel : NSObject <PBCoding, WCTColumnCoding, NSCopying>
{
    BOOL _closed; // +0x8
    unsigned int _participantCount; // +0xc
    unsigned int _feedCount; // +0x10
    unsigned int _maxTopCount; // +0x14
    unsigned int _availableFlag; // +0x18
    unsigned long long _eventTopicId; // +0x20
    unsigned long long _hiddenMark; // +0x28
    WCFinderContact * _contact; // +0x30
    NSString * _eventName; // +0x38
    NSString * _eventDescription; // +0x40
    NSString * _coverImgUrl; // +0x48
    unsigned long long _fromObjectId; // +0x50
    NSDate * _endDate; // +0x58
    FinderEventWordingInfo * _wordingInfo; // +0x60
    FinderJumpInfo * _descriptionJumpInfo; // +0x68
    FinderEventDescriptionContact * _descContactInfo; // +0x70
    NSArray * _postJumpList; // +0x78
    NSString * _postWording; // +0x80
    FinderEventMusicInfo * _musicInfo; // +0x88
    unsigned long long _endTime; // +0x90
}
+ (void)PBArrayAdd_eventTopicId;
+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_eventName;
+ (void)PBArrayAdd_eventDescription;
+ (void)PBArrayAdd_participantCount;
+ (void)PBArrayAdd_coverImgUrl;
+ (void)PBArrayAdd_fromObjectId;
+ (void)PBArrayAdd_feedCount;
+ (void)PBArrayAdd_maxTopCount;
+ (void)PBArrayAdd_closed;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_availableFlag;
+ (void)PBArrayAdd_wordingInfo;
+ (void)PBArrayAdd_hiddenMark;
+ (void)PBArrayAdd_descContactInfo;
+ (void)PBArrayAdd_descriptionJumpInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)fromPBEvent:(id)arg1;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithEvent:(id)arg1;
- (id)convertEventInfo;
- (void)setEndDate:(id)arg1;
- (id)bindEventInfo;
- (BOOL)hadPosted;
- (BOOL)isValid;
- (unsigned long long)eventTopicId;
- (void)setEventTopicId:(unsigned long long)arg1;
- (unsigned long long)hiddenMark;
- (void)setHiddenMark:(unsigned long long)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)eventDescription;
- (void)setEventDescription:(id)arg1;
- (unsigned int)participantCount;
- (void)setParticipantCount:(unsigned int)arg1;
- (id)coverImgUrl;
- (void)setCoverImgUrl:(id)arg1;
- (unsigned long long)fromObjectId;
- (void)setFromObjectId:(unsigned long long)arg1;
- (unsigned int)feedCount;
- (void)setFeedCount:(unsigned int)arg1;
- (unsigned int)maxTopCount;
- (void)setMaxTopCount:(unsigned int)arg1;
- (BOOL)closed;
- (void)setClosed:(BOOL)arg1;
- (id)endDate;
- (id)wordingInfo;
- (void)setWordingInfo:(id)arg1;
- (id)descriptionJumpInfo;
- (void)setDescriptionJumpInfo:(id)arg1;
- (id)descContactInfo;
- (void)setDescContactInfo:(id)arg1;
- (id)postJumpList;
- (void)setPostJumpList:(id)arg1;
- (id)postWording;
- (void)setPostWording:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (unsigned int)availableFlag;
- (void)setAvailableFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

