@interface TextStatePublishContentBuilder : NSObject <MMImageLoaderObserver>
{
    BOOL _fetchedBlackListFromServer; // +0x8
    BOOL _noBlackContacts; // +0x9
    BOOL _refetch3rdPartyBackground; // +0xa
    unsigned int _visibility; // +0xc
    unsigned int _editCreateTime; // +0x10
    TextStateIcon * _icon; // +0x18
    NSString * _desc; // +0x20
    WCLocationInfo * _positionInfo; // +0x28
    TextStatePublishBlackListItem * _blackListItem; // +0x30
    EmojiInfoObj * _emojiInfo; // +0x38
    NSString * _emoticonMd5; // +0x40
    NSString * _emoticonURLString; // +0x48
    NSString * _emoticonPath; // +0x50
    NSString * _backgroundId; // +0x58
    UIImage * _image; // +0x60
    NSString * _imagePath; // +0x68
    NSString * _imageURLString; // +0x70
    NSString * _videoPath; // +0x78
    UIImage * _videoThumbImage; // +0x80
    TextStatePublishMediaInfo * _mediaInfo; // +0x88
    TextStatePublishSourceInfo * _sourceInfo; // +0x90
    NSArray * _blackContactUsernameList; // +0x98
    NSArray * _dynamicContactTagIdList; // +0xa0
    PrivateInfo * _whiteUserInfo; // +0xa8
    NSString * _editTextStateId; // +0xb0
    NSString * _followUsername; // +0xb8
    NSString * _followTextStateId; // +0xc0
    id /* block */ _completionBlock; // +0xc8
    EmoticonUploader * _emoticonUploader; // +0xd0
}
+ (id)builderFromSourceInfo:(id)arg1;
+ (id)builderFromEditingTextState:(id)arg1;
+ (id)builderFromFollowingTextStateForUsername:(id)arg1;
+ (void)setMediaFieldsForBuilder:(id)arg1 withUsername:(id)arg2 textState:(id)arg3;
+ (BOOL)checkEmoticonForUploadWithData:(id)arg1 checkMd5:(id)arg2 acquiredImage:(id *)arg3;
- (BOOL)useStatic3rdPartyMedia;
- (BOOL)prepareContentWithCompletionBlock:(id /* block */)arg1;
- (BOOL)prepareBlackListWithCompletionBlock:(id /* block */)arg1;
- (BOOL)prepareBackgroundWithCompletionBlock:(id /* block */)arg1;
- (BOOL)prepareEmoticonWithCompletionBlock:(id /* block */)arg1;
- (void)setSourceInfo:(id)arg1;
- (BOOL)needDownloadOrProcessExternMedia;
- (void)clearBackground;
- (void)setImage:(id)arg1;
- (void)setImagePath:(id)arg1;
- (void)setImageURLString:(id)arg1;
- (void)privateSetImage:(id)arg1;
- (void)setVideoPath:(id)arg1;
- (void)generateLocalVideoMediaInfo;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)positionInfo;
- (void)setPositionInfo:(id)arg1;
- (id)blackListItem;
- (void)setBlackListItem:(id)arg1;
- (id)emojiInfo;
- (void)setEmojiInfo:(id)arg1;
- (id)emoticonMd5;
- (void)setEmoticonMd5:(id)arg1;
- (id)emoticonURLString;
- (void)setEmoticonURLString:(id)arg1;
- (id)emoticonPath;
- (void)setEmoticonPath:(id)arg1;
- (id)backgroundId;
- (void)setBackgroundId:(id)arg1;
- (id)image;
- (id)imagePath;
- (id)imageURLString;
- (id)videoPath;
- (id)videoThumbImage;
- (void)setVideoThumbImage:(id)arg1;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg1;
- (id)sourceInfo;
- (unsigned int)visibility;
- (void)setVisibility:(unsigned int)arg1;
- (id)blackContactUsernameList;
- (void)setBlackContactUsernameList:(id)arg1;
- (BOOL)fetchedBlackListFromServer;
- (void)setFetchedBlackListFromServer:(BOOL)arg1;
- (BOOL)noBlackContacts;
- (void)setNoBlackContacts:(BOOL)arg1;
- (id)dynamicContactTagIdList;
- (void)setDynamicContactTagIdList:(id)arg1;
- (id)whiteUserInfo;
- (void)setWhiteUserInfo:(id)arg1;
- (unsigned int)editCreateTime;
- (void)setEditCreateTime:(unsigned int)arg1;
- (id)editTextStateId;
- (void)setEditTextStateId:(id)arg1;
- (id)followUsername;
- (void)setFollowUsername:(id)arg1;
- (id)followTextStateId;
- (void)setFollowTextStateId:(id)arg1;
- (BOOL)refetch3rdPartyBackground;
- (void)setRefetch3rdPartyBackground:(BOOL)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)emoticonUploader;
- (void)setEmoticonUploader:(id)arg1;
- (void).cxx_destruct;
@end

