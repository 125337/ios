@interface AddEmoticonWrap : MMObject <PBCoding>
{
    BOOL _showDetailWhenExchangeFailed; // +0x8
    BOOL _allowAddAlreadyInListEmoticons; // +0x9
    BOOL _allowsUploadWhenExceedLimit; // +0xa
    BOOL _repeatedAsset; // +0xb
    int _source; // +0xc
    NSNumber * _fileType; // +0x10
    long long _fileSize; // +0x18
    NSString * _thumbTempFilePath; // +0x20
    NSString * _appid; // +0x28
    NSString * _fromUser; // +0x30
    EmojiInfoObj * _emojiInfoObj; // +0x38
    EmoticonUploadInfoObj * _uploadInfoObj; // +0x40
    EmoticonStoreItem * _storeItem; // +0x48
    NSString * _editSessionId; // +0x50
    EmotionFinderLinkInfo * _finderLinkInfo; // +0x58
}
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_fileType;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_thumbTempFilePath;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_fromUser;
+ (void)PBArrayAdd_emojiInfoObj;
+ (void)PBArrayAdd_uploadInfoObj;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithMessageWrap:(id)arg1 AndSource:(int)arg2;
- (id)getEmoticonImage;
- (BOOL)isSelfieEmoticon;
- (int)source;
- (void)setSource:(int)arg1;
- (BOOL)showDetailWhenExchangeFailed;
- (void)setShowDetailWhenExchangeFailed:(BOOL)arg1;
- (id)fileType;
- (void)setFileType:(id)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (id)thumbTempFilePath;
- (void)setThumbTempFilePath:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)fromUser;
- (void)setFromUser:(id)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (id)uploadInfoObj;
- (void)setUploadInfoObj:(id)arg1;
- (id)storeItem;
- (void)setStoreItem:(id)arg1;
- (BOOL)allowAddAlreadyInListEmoticons;
- (void)setAllowAddAlreadyInListEmoticons:(BOOL)arg1;
- (id)editSessionId;
- (void)setEditSessionId:(id)arg1;
- (id)finderLinkInfo;
- (void)setFinderLinkInfo:(id)arg1;
- (BOOL)allowsUploadWhenExceedLimit;
- (void)setAllowsUploadWhenExceedLimit:(BOOL)arg1;
- (BOOL)repeatedAsset;
- (void)setRepeatedAsset:(BOOL)arg1;
- (void).cxx_destruct;
@end
