@interface WCMultiShareHelper : NSObject
{
    BOOL _enableBulletPrefix; // +0x8
    int _textItemCount; // +0xc
    int _videoItemCount; // +0x10
    int _imageItemCount; // +0x14
    int _fileItemCount; // +0x18
    int _otherItemCount; // +0x1c
    int _scene; // +0x20
    unsigned long long _totalSize; // +0x28
    NSMutableArray * _arrNotDownloadMsgWrap; // +0x30
    NSArray * _arrMsgWrap; // +0x38
    NSString * _nsCurrTime; // +0x40
    NSDateFormatter * _contentDateFormatter; // +0x48
    long long _recordExpandMode; // +0x50
}
- (id)initWithMsgList:(id)arg1 scene:(int)arg2;
- (id)initWithMsgList:(id)arg1 scene:(int)arg2 recordExpandMode:(long long)arg3;
- (id)generateShareTimeContent:(double)arg1;
- (id)getEncodeNickName:(id)arg1;
- (id)getTextShareContent:(id)arg1 content:(id)arg2;
- (id)getImageShareContent:(id)arg1 isFileExist:(BOOL)arg2;
- (id)getVideoShareContent:(id)arg1 isFileExist:(BOOL)arg2;
- (id)getFileShareContent:(id)arg1 isFileExist:(BOOL)arg2;
- (id)getVoiceShareContent:(id)arg1;
- (id)getURLShareContent:(id)arg1;
- (id)getOtherShareContent:(id)arg1;
- (id)resolveVideoFilePathForMsgWrap:(id)arg1;
- (id)resolveImageFilePathForMsgWrap:(id)arg1;
- (id)resolveFileFilePathForMsgWrap:(id)arg1;
- (id)generatePasteShareItems;
- (id)generatePasteShareItems:(BOOL)arg1;
- (id)generatePasteShareItemsForMultiCopyWithItemLimit:(unsigned long long)arg1;
- (void)addFinderFeedBatchItemWithObjectId:(unsigned long long)arg1 item:(id)arg2 digest:(id)arg3 isLastAttachFile:(BOOL)arg4 addTimeNickName:(BOOL)arg5 batchItems:(id)arg6 objectIds:(id)arg7 objectIdSet:(id)arg8;
- (void)resolveFinderFeedH5UrlWithBatchItems:(id)arg1 objectIds:(id)arg2;
- (id)generateRecordExpandShareItemsWithTimeNickName:(BOOL)arg1;
- (id)generateMergedRecordShareItemsFromBotContact;
- (id)generateMergedRecordShareItemsFromThirdApp;
- (id)generateMergedRecordShareItemsByAddingTimeNickName:(int)arg1;
- (id)generateSeparateRecordShareItemsForZip;
- (id)generateShareItemsNoTimeNickName;
- (id)generateShareItemsNoTimeNickName:(BOOL)arg1;
- (id)generateShareItemsByAddingTimeNickName;
- (id)generateShareItemsByAddingTimeNickName:(BOOL)arg1;
- (void)calPasteItemsInfo:(id)arg1;
- (id)generateSystemShareItems;
- (int)textItemCount;
- (void)setTextItemCount:(int)arg1;
- (int)videoItemCount;
- (void)setVideoItemCount:(int)arg1;
- (int)imageItemCount;
- (void)setImageItemCount:(int)arg1;
- (int)fileItemCount;
- (void)setFileItemCount:(int)arg1;
- (int)otherItemCount;
- (void)setOtherItemCount:(int)arg1;
- (unsigned long long)totalSize;
- (void)setTotalSize:(unsigned long long)arg1;
- (id)arrNotDownloadMsgWrap;
- (void)setArrNotDownloadMsgWrap:(id)arg1;
- (id)arrMsgWrap;
- (void)setArrMsgWrap:(id)arg1;
- (id)nsCurrTime;
- (void)setNsCurrTime:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)contentDateFormatter;
- (void)setContentDateFormatter:(id)arg1;
- (long long)recordExpandMode;
- (void)setRecordExpandMode:(long long)arg1;
- (BOOL)enableBulletPrefix;
- (void)setEnableBulletPrefix:(BOOL)arg1;
- (void).cxx_destruct;
@end
