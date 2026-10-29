@interface WCStoryDataItem : MMObject <WCTTableCoding>
{
    BOOL _bChatRoomSyc; // +0x8
    BOOL _isUploading; // +0x9
    BOOL _isUploadRetrying; // +0xa
    BOOL _isUploadFail; // +0xb
    BOOL _isSelectFromAlbum; // +0xc
    BOOL _isInvisible; // +0xd
    int _createtime; // +0x10
    int _uploadErrType; // +0x14
    unsigned int _audioChannelsPerFrame; // +0x18
    NSString * _tid; // +0x20
    NSString * _username; // +0x28
    NSString * _nickname; // +0x30
    NSString * _tmpLocalId; // +0x38
    NSString * _uploadErrMsg; // +0x40
    long long _commentCount; // +0x48
    unsigned long long _unreadBubbleCount; // +0x50
    unsigned long long _unreadCommentCount; // +0x58
    unsigned long long _unreadVisitCount; // +0x60
    WCStoryMediaItem * _mediaItem; // +0x68
    WCStoryCommentMutableArray * _commentList; // +0x70
    WCStoryBubbleMutableArray * _bubbleList; // +0x78
    WCStoryVisitorMutableArray * _visitorList; // +0x80
    NSData * _localInfoData; // +0x88
    NSString * _reportXml; // +0x90
    NSString * _originVideoArgs; // +0x98
    NSString * _exportVideoPath; // +0xa0
    unsigned long long _scope; // +0xa8
    NSArray * _aggregateBubbleList; // +0xb0
    unsigned long long _visitorCount; // +0xb8
    NSArray * _aggregateBubbleCommentVisitList; // +0xc0
    NSMutableArray * _originImageMd5s; // +0xc8
    WCLocationInfo * _locationInfo; // +0xd0
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_username;
+ (const void *)nickname;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_nickname;
+ (const void *)tmpLocalId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_tmpLocalId;
+ (const void *)createtime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_createtime;
+ (const void *)isUploading;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_isUploading;
+ (const void *)uploadErrType;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_uploadErrType;
+ (const void *)isUploadFail;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_isUploadFail;
+ (const void *)uploadErrMsg;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_uploadErrMsg;
+ (const void *)commentCount;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_commentCount;
+ (const void *)commentList;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_commentList;
+ (const void *)bubbleList;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_bubbleList;
+ (const void *)visitorList;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_visitorList;
+ (const void *)localInfoData;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_localInfoData;
+ (const void *)mediaItem;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_mediaItem;
+ (const void *)reportXml;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_reportXml;
+ (const void *)bChatRoomSyc;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_bChatRoomSyc;
+ (const void *)isInvisible;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_isInvisible;
+ (const void *)scope;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_scope;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (void)__wcdb_index_20:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_24:(void *)arg1;
- (BOOL)isVaild;
- (BOOL)isExpired;
- (id)commentList;
- (id)visitorList;
- (long long)compareTime:(id)arg1;
- (id)getMediaWraps;
- (void)setLocationInfo:(id)arg1;
- (void)cleanDataItemFileCache;
- (BOOL)dataItemHiddenInTimeline;
- (id)aggregateBubbleList;
- (id)aggregateBubbleCommentVisitList;
- (id)description;
- (id)debugDescription;
- (BOOL)hasBubble;
- (void)resetAggregateBubbleList;
- (BOOL)isPostBySelf;
- (BOOL)hadUnReadComment;
- (unsigned long long)visitorCount;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)tmpLocalId;
- (void)setTmpLocalId:(id)arg1;
- (BOOL)bChatRoomSyc;
- (void)setBChatRoomSyc:(BOOL)arg1;
- (int)createtime;
- (void)setCreatetime:(int)arg1;
- (BOOL)isUploading;
- (void)setIsUploading:(BOOL)arg1;
- (BOOL)isUploadRetrying;
- (void)setIsUploadRetrying:(BOOL)arg1;
- (BOOL)isUploadFail;
- (void)setIsUploadFail:(BOOL)arg1;
- (int)uploadErrType;
- (void)setUploadErrType:(int)arg1;
- (id)uploadErrMsg;
- (void)setUploadErrMsg:(id)arg1;
- (long long)commentCount;
- (void)setCommentCount:(long long)arg1;
- (unsigned long long)unreadBubbleCount;
- (void)setUnreadBubbleCount:(unsigned long long)arg1;
- (unsigned long long)unreadCommentCount;
- (void)setUnreadCommentCount:(unsigned long long)arg1;
- (unsigned long long)unreadVisitCount;
- (void)setUnreadVisitCount:(unsigned long long)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (void)setCommentList:(id)arg1;
- (id)bubbleList;
- (void)setBubbleList:(id)arg1;
- (void)setVisitorList:(id)arg1;
- (id)localInfoData;
- (void)setLocalInfoData:(id)arg1;
- (id)reportXml;
- (void)setReportXml:(id)arg1;
- (id)originVideoArgs;
- (void)setOriginVideoArgs:(id)arg1;
- (id)exportVideoPath;
- (void)setExportVideoPath:(id)arg1;
- (unsigned int)audioChannelsPerFrame;
- (void)setAudioChannelsPerFrame:(unsigned int)arg1;
- (BOOL)isSelectFromAlbum;
- (void)setIsSelectFromAlbum:(BOOL)arg1;
- (BOOL)isInvisible;
- (void)setIsInvisible:(BOOL)arg1;
- (unsigned long long)scope;
- (void)setScope:(unsigned long long)arg1;
- (void)setAggregateBubbleList:(id)arg1;
- (void)setVisitorCount:(unsigned long long)arg1;
- (void)setAggregateBubbleCommentVisitList:(id)arg1;
- (id)originImageMd5s;
- (void)setOriginImageMd5s:(id)arg1;
- (id)locationInfo;
- (void).cxx_destruct;
@end

