@interface WCFinderFansProfileParams : NSObject
{
    BOOL _showMsgButton; // +0x8
    BOOL _showLikePrivacySection; // +0x9
    int _contactType; // +0xc
    unsigned long long _fromSceneType; // +0x10
    unsigned long long _profileRefScene; // +0x18
    unsigned long long _actionType; // +0x20
    unsigned long long _controlType; // +0x28
    NSString * _providerFinderUsername; // +0x30
    WCFinderLikeInfo * _likeInfo; // +0x38
    NSString * _watchingFeedID; // +0x40
    unsigned long long _sourceType; // +0x48
    CContact * _contact; // +0x50
    WCFinderMention * _mention; // +0x58
    WCFinderComment * _comment; // +0x60
    FinderContactExtRelationInfo * _relationInfo; // +0x68
    unsigned long long _objectId; // +0x70
    unsigned long long _likeId; // +0x78
    NSString * _favId; // +0x80
    NSString * _fansId; // +0x88
    NSData * _listenBypassBuffer; // +0x90
}
+ (id)paramsWithContact:(id)arg1;
+ (id)paramsWithContact:(id)arg1 mention:(id)arg2;
+ (id)paramsWithContact:(id)arg1 objectId:(unsigned long long)arg2 likeId:(unsigned long long)arg3;
+ (id)paramsWithContact:(id)arg1 objectId:(unsigned long long)arg2 comment:(id)arg3;
+ (id)paramsWithContact:(id)arg1 objectId:(unsigned long long)arg2 favId:(id)arg3;
+ (id)paramsWithContact:(id)arg1 fansId:(id)arg2;
+ (id)paramsWithContact:(id)arg1 relationInfo:(id)arg2;
+ (id)paramsWithContact:(id)arg1 listenBypassBuffer:(id)arg2;
- (id)initWithContact:(id)arg1 sourceType:(unsigned long long)arg2;
- (id)buildRelationInfo;
- (unsigned long long)fromSceneType;
- (void)setFromSceneType:(unsigned long long)arg1;
- (unsigned long long)profileRefScene;
- (void)setProfileRefScene:(unsigned long long)arg1;
- (BOOL)showMsgButton;
- (void)setShowMsgButton:(BOOL)arg1;
- (BOOL)showLikePrivacySection;
- (void)setShowLikePrivacySection:(BOOL)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (unsigned long long)controlType;
- (void)setControlType:(unsigned long long)arg1;
- (id)providerFinderUsername;
- (void)setProviderFinderUsername:(id)arg1;
- (int)contactType;
- (void)setContactType:(int)arg1;
- (id)likeInfo;
- (void)setLikeInfo:(id)arg1;
- (id)watchingFeedID;
- (void)setWatchingFeedID:(id)arg1;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)mention;
- (void)setMention:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)relationInfo;
- (void)setRelationInfo:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)likeId;
- (void)setLikeId:(unsigned long long)arg1;
- (id)favId;
- (void)setFavId:(id)arg1;
- (id)fansId;
- (void)setFansId:(id)arg1;
- (id)listenBypassBuffer;
- (void)setListenBypassBuffer:(id)arg1;
- (void).cxx_destruct;
@end
