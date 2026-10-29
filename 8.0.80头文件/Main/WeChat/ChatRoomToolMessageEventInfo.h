@interface ChatRoomToolMessageEventInfo : MMObject <PBCoding, NSCopying, WCCapsuleBarItem>
{
    unsigned int _eventTime; // +0x8
    unsigned int _createTime; // +0xc
    unsigned int _nReply; // +0x10
    unsigned int _isDispose; // +0x14
    NSString * _eventID; // +0x18
    NSString * _userName; // +0x20
    NSString * _title; // +0x28
    NSString * _desc; // +0x30
    NSString * _appUserName; // +0x38
    NSString * _appPath; // +0x40
    NSString * _customInfo; // +0x48
    long long _nRelatedMesSvrID; // +0x50
    NSString * _creatorUserName; // +0x58
    NSString * _manager; // +0x60
    NSMutableDictionary * _extInfo; // +0x68
    NSString * _nsNewXMLScene; // +0x70
}
+ (void)PBArrayAdd_eventID;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_eventTime;
+ (void)PBArrayAdd_appUserName;
+ (void)PBArrayAdd_appPath;
+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_nRelatedMesSvrID;
+ (void)PBArrayAdd_creatorUserName;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_manager;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_nReply;
+ (void)PBArrayAdd_isDispose;
+ (void)initialize;
+ (id)GenLocalEventIdBySvrId:(long long)arg1;
+ (id)genMessageEventInfoMsgWrap:(id)arg1;
+ (id)genMessageEventInfoWithUserName:(id)arg1 andEventID:(id)arg2;
- (id)getPBPropertyTable;
- (id)description;
- (id)extInfo;
- (BOOL)hasCheckTodo;
- (void)setCheckTodo;
- (BOOL)isValid;
- (BOOL)canRevoke;
- (BOOL)hasReplyInfo;
- (id)replyInfo;
- (BOOL)canDisplay;
- (Class)capsuleCellClass;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)genDBContactChatRoomToolMessageEvent;
- (void)copyFromDBMessageEventInfo:(id)arg1;
- (id)eventID;
- (void)setEventID:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned int)eventTime;
- (void)setEventTime:(unsigned int)arg1;
- (id)appUserName;
- (void)setAppUserName:(id)arg1;
- (id)appPath;
- (void)setAppPath:(id)arg1;
- (id)customInfo;
- (void)setCustomInfo:(id)arg1;
- (long long)nRelatedMesSvrID;
- (void)setNRelatedMesSvrID:(long long)arg1;
- (id)creatorUserName;
- (void)setCreatorUserName:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (void)setExtInfo:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)nReply;
- (void)setNReply:(unsigned int)arg1;
- (unsigned int)isDispose;
- (void)setIsDispose:(unsigned int)arg1;
- (id)nsNewXMLScene;
- (void)setNsNewXMLScene:(id)arg1;
- (void).cxx_destruct;
@end
