@interface EmoticonUploadInfoObj : MMObject <PBCoding>
{
    BOOL _isUploadWxam; // +0x8
    BOOL _isSelfie; // +0x9
    BOOL _needAsyncUpload; // +0xa
    BOOL _needAppendUserData; // +0xb
    NSString * _uploadImgMd5; // +0x10
    NSString * _tempFilePath; // +0x18
    NSString * _attachedText; // +0x20
    NSString * _attachedTextColor; // +0x28
    NSMutableArray * _attachedEmojiMd5List; // +0x30
    NSString * _followMd5; // +0x38
    NSString * _uploadFilePath; // +0x40
    unsigned long long _status; // +0x48
    unsigned long long _failReason; // +0x50
    unsigned long long _retryCount; // +0x58
    unsigned long long _selfieEnterTime; // +0x60
    unsigned long long _selfieScene; // +0x68
    NSString * _lensId; // +0x70
    unsigned long long _uploadScene; // +0x78
    NSMutableArray * _wordings; // +0x80
    EmotionFinderLinkInfo * _finderSourceInfo; // +0x88
}
+ (void)PBArrayAdd_uploadImgMd5;
+ (void)PBArrayAdd_isUploadWxam;
+ (void)PBArrayAdd_attachedText;
+ (void)PBArrayAdd_attachedEmojiMd5List;
+ (void)PBArrayAdd_followMd5;
+ (void)PBArrayAdd_isSelfie;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_failReason;
+ (void)PBArrayAdd_needAsyncUpload;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_selfieEnterTime;
+ (void)PBArrayAdd_selfieScene;
+ (void)PBArrayAdd_attachedTextColor;
+ (void)PBArrayAdd_lensId;
+ (void)PBArrayAdd_uploadScene;
+ (void)PBArrayAdd_wordings;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isUploadDirectly;
- (unsigned long long)emoticonType;
- (BOOL)saveImgDataToTempPathWithImgData:(id)arg1;
- (BOOL)saveImgDataToUploadPathWithImgData:(id)arg1;
- (BOOL)saveImgDataToPath:(id)arg1 withImgData:(id)arg2;
- (id)dataOfEmoticon;
- (id)bufferWithOffset:(unsigned int)arg1 maxLen:(unsigned int)arg2;
- (unsigned int)totalLenOfData;
- (id)uploadImgMd5;
- (void)setUploadImgMd5:(id)arg1;
- (BOOL)isUploadWxam;
- (void)setIsUploadWxam:(BOOL)arg1;
- (id)tempFilePath;
- (void)setTempFilePath:(id)arg1;
- (id)attachedText;
- (void)setAttachedText:(id)arg1;
- (id)attachedTextColor;
- (void)setAttachedTextColor:(id)arg1;
- (id)attachedEmojiMd5List;
- (void)setAttachedEmojiMd5List:(id)arg1;
- (id)followMd5;
- (void)setFollowMd5:(id)arg1;
- (BOOL)isSelfie;
- (void)setIsSelfie:(BOOL)arg1;
- (id)uploadFilePath;
- (void)setUploadFilePath:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)failReason;
- (void)setFailReason:(unsigned long long)arg1;
- (BOOL)needAsyncUpload;
- (void)setNeedAsyncUpload:(BOOL)arg1;
- (unsigned long long)retryCount;
- (void)setRetryCount:(unsigned long long)arg1;
- (unsigned long long)selfieEnterTime;
- (void)setSelfieEnterTime:(unsigned long long)arg1;
- (unsigned long long)selfieScene;
- (void)setSelfieScene:(unsigned long long)arg1;
- (id)lensId;
- (void)setLensId:(id)arg1;
- (unsigned long long)uploadScene;
- (void)setUploadScene:(unsigned long long)arg1;
- (id)wordings;
- (void)setWordings:(id)arg1;
- (id)finderSourceInfo;
- (void)setFinderSourceInfo:(id)arg1;
- (BOOL)needAppendUserData;
- (void)setNeedAppendUserData:(BOOL)arg1;
- (void).cxx_destruct;
@end

