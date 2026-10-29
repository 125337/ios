@interface FavoritesItemWrapper : NSObject
{
    BOOL _isPinTop; // +0x8
    BOOL _isContentSectionListValid; // +0x9
    long long _localId; // +0x10
    long long _type; // +0x18
    long long _updateTime; // +0x20
    long long _pinTopTimestamp; // +0x28
    long long _uploadStatus; // +0x30
    NSNumber * _favId; // +0x38
    NSNumber * _sourceType; // +0x40
    NSNumber * _srcCreateTime; // +0x48
    NSNumber * _editTime; // +0x50
    NSNumber * _localStatus; // +0x58
    NSNumber * _ctrlFlag; // +0x60
    NSString * _fromUsr; // +0x68
    NSString * _toUsr; // +0x70
    NSString * _realChatName; // +0x78
    NSString * _appId; // +0x80
    NSString * _brandId; // +0x88
    NSString * _link; // +0x90
    NSString * _rawTitle; // +0x98
    NSString * _rawDesc; // +0xa0
    NSString * _title; // +0xa8
    NSString * _desc; // +0xb0
    NSString * _sourceName; // +0xb8
    NSString * _fromUsrDisplayName; // +0xc0
    NSString * _toUsrDisplayName; // +0xc8
    NSString * _realChatNameDisplay; // +0xd0
    NSString * _authorName; // +0xd8
    NSString * _sourceLogoPath; // +0xe0
    NSArray * _thumbUrls; // +0xe8
    NSString * _videoDuration; // +0xf0
    NSString * _fileFormat; // +0xf8
    NSString * _fileSize; // +0x100
    NSArray * _chatNames; // +0x108
    NSArray * _chatContents; // +0x110
    NSString * _logoName; // +0x118
    NSNumber * _hideSourceName; // +0x120
    NSNumber * _isFromSelf; // +0x128
    NSArray * _tagList; // +0x130
    NSNumber * _isFromRecord; // +0x138
    FlutterStandardTypedData * _contentSectionList; // +0x140
    NSArray * _noteAttachmentPreviews; // +0x148
    NSNumber * _isDictating; // +0x150
}
+ (id)makeWithLocalId:(long long)arg1 type:(long long)arg2 updateTime:(long long)arg3 pinTopTimestamp:(long long)arg4 uploadStatus:(long long)arg5 isPinTop:(BOOL)arg6 favId:(id)arg7 sourceType:(id)arg8 srcCreateTime:(id)arg9 editTime:(id)arg10 localStatus:(id)arg11 ctrlFlag:(id)arg12 fromUsr:(id)arg13 toUsr:(id)arg14 realChatName:(id)arg15 appId:(id)arg16 brandId:(id)arg17 link:(id)arg18 rawTitle:(id)arg19 rawDesc:(id)arg20 title:(id)arg21 desc:(id)arg22 sourceName:(id)arg23 fromUsrDisplayName:(id)arg24 toUsrDisplayName:(id)arg25 realChatNameDisplay:(id)arg26 authorName:(id)arg27 sourceLogoPath:(id)arg28 thumbUrls:(id)arg29 videoDuration:(id)arg30 fileFormat:(id)arg31 fileSize:(id)arg32 chatNames:(id)arg33 chatContents:(id)arg34 logoName:(id)arg35 hideSourceName:(id)arg36 isFromSelf:(id)arg37 tagList:(id)arg38 isFromRecord:(id)arg39 contentSectionList:(id)arg40 noteAttachmentPreviews:(id)arg41 isContentSectionListValid:(BOOL)arg42 isDictating:(id)arg43;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)localId;
- (void)setLocalId:(long long)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)updateTime;
- (void)setUpdateTime:(long long)arg1;
- (long long)pinTopTimestamp;
- (void)setPinTopTimestamp:(long long)arg1;
- (long long)uploadStatus;
- (void)setUploadStatus:(long long)arg1;
- (BOOL)isPinTop;
- (void)setIsPinTop:(BOOL)arg1;
- (id)favId;
- (void)setFavId:(id)arg1;
- (id)sourceType;
- (void)setSourceType:(id)arg1;
- (id)srcCreateTime;
- (void)setSrcCreateTime:(id)arg1;
- (id)editTime;
- (void)setEditTime:(id)arg1;
- (id)localStatus;
- (void)setLocalStatus:(id)arg1;
- (id)ctrlFlag;
- (void)setCtrlFlag:(id)arg1;
- (id)fromUsr;
- (void)setFromUsr:(id)arg1;
- (id)toUsr;
- (void)setToUsr:(id)arg1;
- (id)realChatName;
- (void)setRealChatName:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)brandId;
- (void)setBrandId:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (id)rawTitle;
- (void)setRawTitle:(id)arg1;
- (id)rawDesc;
- (void)setRawDesc:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (id)fromUsrDisplayName;
- (void)setFromUsrDisplayName:(id)arg1;
- (id)toUsrDisplayName;
- (void)setToUsrDisplayName:(id)arg1;
- (id)realChatNameDisplay;
- (void)setRealChatNameDisplay:(id)arg1;
- (id)authorName;
- (void)setAuthorName:(id)arg1;
- (id)sourceLogoPath;
- (void)setSourceLogoPath:(id)arg1;
- (id)thumbUrls;
- (void)setThumbUrls:(id)arg1;
- (id)videoDuration;
- (void)setVideoDuration:(id)arg1;
- (id)fileFormat;
- (void)setFileFormat:(id)arg1;
- (id)fileSize;
- (void)setFileSize:(id)arg1;
- (id)chatNames;
- (void)setChatNames:(id)arg1;
- (id)chatContents;
- (void)setChatContents:(id)arg1;
- (id)logoName;
- (void)setLogoName:(id)arg1;
- (id)hideSourceName;
- (void)setHideSourceName:(id)arg1;
- (id)isFromSelf;
- (void)setIsFromSelf:(id)arg1;
- (id)tagList;
- (void)setTagList:(id)arg1;
- (id)isFromRecord;
- (void)setIsFromRecord:(id)arg1;
- (id)contentSectionList;
- (void)setContentSectionList:(id)arg1;
- (id)noteAttachmentPreviews;
- (void)setNoteAttachmentPreviews:(id)arg1;
- (BOOL)isContentSectionListValid;
- (void)setIsContentSectionListValid:(BOOL)arg1;
- (id)isDictating;
- (void)setIsDictating:(id)arg1;
- (void).cxx_destruct;
@end
