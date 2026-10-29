@interface MMMusicMVModel : NSObject <MusicInteractionStatistics, PBCoding, NSCopying>
{
    BOOL _hasCustomCover; // +0x8
    BOOL _isMvWithBeat; // +0x9
    BOOL _isPrivateAccount; // +0xa
    BOOL _disableForwardByPrivateAccount; // +0xb
    BOOL _isSelfLiked; // +0xc
    BOOL _isDraft; // +0xd
    BOOL _isDeleted; // +0xe
    int _mvType; // +0x10
    int _draftJumpPage; // +0x14
    NSMutableArray * _arrFlexClipTracks; // +0x18
    NSMutableArray * _arrFixedClipTracks; // +0x20
    NSMutableArray * _arrFlexBasicClipTracks; // +0x28
    MMMusicMVSongInfo * _songInfo; // +0x30
    MMMusicMVOriginalInfo * _originalInfo; // +0x38
    NSString * _thumbUrl; // +0x40
    NSString * _initialDraftId; // +0x48
    NSString * _svrId; // +0x50
    NSString * _nonceId; // +0x58
    NSString * _localId; // +0x60
    NSString * _authorFinderUsername; // +0x68
    NSString * _authorFinderNickname; // +0x70
    NSString * _authorFinderHeadUrl; // +0x78
    NSString * _sessionBuffer; // +0x80
    long long _likeCount; // +0x88
    long long _commentCount; // +0x90
    long long _forwardCount; // +0x98
    double _createTime; // +0xa0
    unsigned long long _postingState; // +0xa8
    NSString * _coverLocalFilename; // +0xb0
    NSArray * _refObjectList; // +0xb8
    unsigned long long _mediaType; // +0xc0
}
+ (void)PBArrayAdd_arrFixedClipTracks;
+ (void)PBArrayAdd_songInfo;
+ (void)PBArrayAdd_originalInfo;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_svrId;
+ (void)PBArrayAdd_localId;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_isDraft;
+ (void)PBArrayAdd_coverLocalFilename;
+ (void)PBArrayAdd_isDeleted;
+ (void)PBArrayAdd_initialDraftId;
+ (void)PBArrayAdd_hasCustomCover;
+ (void)PBArrayAdd_mvType;
+ (void)PBArrayAdd_arrFlexClipTracks;
+ (void)PBArrayAdd_nonceId;
+ (void)PBArrayAdd_draftJumpPage;
+ (void)initialize;
+ (id)modelPropertyBlacklist;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)musicInteractionidentifier;
- (BOOL)isValidMusicInteractionStatistics;
- (id)getPBPropertyTable;
- (void)setThumbUrl:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isVaild;
- (BOOL)canCreateMV;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)songInfo;
- (BOOL)isSvrMode;
- (BOOL)isMVInfoValid;
- (BOOL)isPosting;
- (BOOL)isDeletable;
- (void)clearTrackItemsData;
- (void)clearTrackItemsDataAndIsKeepFeatureList:(BOOL)arg1;
- (BOOL)isMyPost;
- (BOOL)isSameModel:(id)arg1;
- (BOOL)isFlexClipMV;
- (id)arrTrack;
- (void)setArrTrack:(id)arg1;
- (void)updateRefObjectList:(id)arg1;
- (BOOL)isSupportedMV;
- (int)mvType;
- (void)setMvType:(int)arg1;
- (id)arrFlexClipTracks;
- (void)setArrFlexClipTracks:(id)arg1;
- (id)arrFixedClipTracks;
- (void)setArrFixedClipTracks:(id)arg1;
- (id)arrFlexBasicClipTracks;
- (void)setArrFlexBasicClipTracks:(id)arg1;
- (void)setSongInfo:(id)arg1;
- (id)originalInfo;
- (void)setOriginalInfo:(id)arg1;
- (int)draftJumpPage;
- (void)setDraftJumpPage:(int)arg1;
- (id)thumbUrl;
- (id)initialDraftId;
- (void)setInitialDraftId:(id)arg1;
- (BOOL)hasCustomCover;
- (void)setHasCustomCover:(BOOL)arg1;
- (BOOL)isMvWithBeat;
- (void)setIsMvWithBeat:(BOOL)arg1;
- (id)svrId;
- (void)setSvrId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)localId;
- (void)setLocalId:(id)arg1;
- (id)authorFinderUsername;
- (void)setAuthorFinderUsername:(id)arg1;
- (id)authorFinderNickname;
- (void)setAuthorFinderNickname:(id)arg1;
- (id)authorFinderHeadUrl;
- (void)setAuthorFinderHeadUrl:(id)arg1;
- (BOOL)isPrivateAccount;
- (void)setIsPrivateAccount:(BOOL)arg1;
- (BOOL)disableForwardByPrivateAccount;
- (void)setDisableForwardByPrivateAccount:(BOOL)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (long long)likeCount;
- (void)setLikeCount:(long long)arg1;
- (long long)commentCount;
- (void)setCommentCount:(long long)arg1;
- (long long)forwardCount;
- (void)setForwardCount:(long long)arg1;
- (BOOL)isSelfLiked;
- (void)setIsSelfLiked:(BOOL)arg1;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (unsigned long long)postingState;
- (void)setPostingState:(unsigned long long)arg1;
- (BOOL)isDraft;
- (void)setIsDraft:(BOOL)arg1;
- (id)coverLocalFilename;
- (void)setCoverLocalFilename:(id)arg1;
- (BOOL)isDeleted;
- (void)setIsDeleted:(BOOL)arg1;
- (id)refObjectList;
- (void)setRefObjectList:(id)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

