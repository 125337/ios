@interface WCMultiShareRecordExpandHelper : NSObject
{
    BOOL _keepTopMessageBlankLine; // +0x8
    BOOL _enableBulletPrefix; // +0x9
    int _scene; // +0xc
    unsigned long long _maxExpandLevel; // +0x10
    NSArray * _arrMsgWrap; // +0x18
    NSString * _nsCurrTime; // +0x20
    NSMutableArray * _arrNotDownloadMsgWrap; // +0x28
    NSDateFormatter * _contentDateFormatter; // +0x30
    long long _expandMode; // +0x38
}
- (id)initWithMsgList:(id)arg1 currentTime:(id)arg2 notDownloadMsgWrap:(id)arg3 dateFormatter:(id)arg4 scene:(int)arg5;
- (id)initWithMsgList:(id)arg1 currentTime:(id)arg2 notDownloadMsgWrap:(id)arg3 dateFormatter:(id)arg4 expandMode:(long long)arg5 scene:(int)arg6;
- (id)initWithMsgList:(id)arg1 currentTime:(id)arg2 notDownloadMsgWrap:(id)arg3 dateFormatter:(id)arg4 expandMode:(long long)arg5 scene:(int)arg6 keepTopMessageBlankLine:(BOOL)arg7;
- (id)generateShareTimeContent:(double)arg1;
- (id)getEncodeNickName:(id)arg1;
- (id)getTextShareContent:(id)arg1 content:(id)arg2;
- (id)getShareContentWithNickName:(id)arg1 timeDesc:(id)arg2 content:(id)arg3;
- (id)getShareContentWithNickName:(id)arg1 timeDesc:(id)arg2 content:(id)arg3 appendBlankLine:(BOOL)arg4;
- (id)getShareContentWithoutNickNameTimeWithContent:(id)arg1;
- (id)getImageShareContent:(id)arg1 isFileExist:(BOOL)arg2;
- (id)getVideoShareContent:(id)arg1 isFileExist:(BOOL)arg2;
- (id)getFileShareContent:(id)arg1 isFileExist:(BOOL)arg2;
- (id)getVoiceShareContent:(id)arg1;
- (id)getURLShareContent:(id)arg1;
- (id)getOtherShareContent:(id)arg1;
- (id)resolveVideoFilePathForMsgWrap:(id)arg1;
- (id)resolveImageFilePathForMsgWrap:(id)arg1;
- (id)resolveFileFilePathForMsgWrap:(id)arg1;
- (void)addFinderFeedBatchItemWithObjectId:(unsigned long long)arg1 item:(id)arg2 digest:(id)arg3 addTimeNickName:(BOOL)arg4 indentLevel:(unsigned long long)arg5 customNickName:(id)arg6 customTimeDesc:(id)arg7 batchItems:(id)arg8 objectIds:(id)arg9 objectIdSet:(id)arg10;
- (void)resolveFinderFeedH5UrlWithBatchItems:(id)arg1 objectIds:(id)arg2;
- (id)indentPrefixForLevel:(unsigned long long)arg1;
- (id)contentByApplyingIndent:(id)arg1 indentLevel:(unsigned long long)arg2;
- (id)contentByKeepingSingleTrailingLineBreak:(id)arg1;
- (id)contentByKeepingTrailingLineBreakCount:(id)arg1 lineBreakCount:(unsigned long long)arg2;
- (unsigned long long)trailingLineBreakCountForContent:(id)arg1;
- (unsigned long long)consumeShareItemIndex:(unsigned long long *)arg1;
- (id)mediaShareFileNameWithFormat:(id)arg1 msgWrap:(id)arg2 currentIndex:(unsigned long long)arg3 indentLevel:(unsigned long long)arg4 mediaNameContext:(id)arg5 isImage:(BOOL)arg6;
- (id)defaultUnnamedFileName;
- (id)normalizedFileNameKeyForFileName:(id)arg1;
- (id)deduplicatedFileNameWithFileName:(id)arg1 filePath:(id)arg2 mediaNameContext:(id)arg3;
- (id)shareContentForMsgWrap:(id)arg1 content:(id)arg2 addTimeNickName:(BOOL)arg3 appendBlankLine:(BOOL)arg4 customNickName:(id)arg5 customTimeDesc:(id)arg6;
- (void)addTextItemWithContent:(id)arg1 msgWrap:(id)arg2 indentLevel:(unsigned long long)arg3 shareItemList:(id)arg4 isLastAttachFile:(BOOL *)arg5 trailingLineBreakCount:(unsigned long long)arg6;
- (unsigned long long)trailingLineBreakCountForIndentLevel:(unsigned long long)arg1 mediaNameContext:(id)arg2;
- (unsigned long long)trailingLineBreakCountForMediaWithFileExist:(BOOL)arg1 indentLevel:(unsigned long long)arg2 mediaNameContext:(id)arg3;
- (BOOL)shouldAppendBlankLineAfterAttachFileWithIndentLevel:(unsigned long long)arg1 mediaNameContext:(id)arg2;
- (id)nickNameForRecordData:(id)arg1;
- (id)timeDescForRecordData:(id)arg1;
- (void)appendShareItemsForRecordData:(id)arg1 addTimeNickName:(BOOL)arg2 indentLevel:(unsigned long long)arg3 ownerMsgWrap:(id)arg4 shareItemList:(id)arg5 finderBatchItems:(id)arg6 finderObjectIds:(id)arg7 finderObjectIdSet:(id)arg8 itemIndex:(unsigned long long *)arg9 isLastAttachFile:(BOOL *)arg10 mediaNameContext:(id)arg11;
- (void)appendShareItemsForMsgWrap:(id)arg1 addTimeNickName:(BOOL)arg2 indentLevel:(unsigned long long)arg3 ownerMsgWrap:(id)arg4 shareItemList:(id)arg5 finderBatchItems:(id)arg6 finderObjectIds:(id)arg7 finderObjectIdSet:(id)arg8 itemIndex:(unsigned long long *)arg9 isLastAttachFile:(BOOL *)arg10 mediaNameContext:(id)arg11 customNickName:(id)arg12 customTimeDesc:(id)arg13;
- (void)ensureTopLevelTrailingBlankLineWithShareItemList:(id)arg1 isLastAttachFile:(BOOL *)arg2;
- (void)trimFinalTextItemTrailingLineBreakWithShareItemList:(id)arg1;
- (id)generateShareItemsNoTimeNickName;
- (id)generateShareItemsByAddingTimeNickName;
- (id)generatePasteShareItems;
- (unsigned long long)maxExpandLevel;
- (void)setMaxExpandLevel:(unsigned long long)arg1;
- (id)arrMsgWrap;
- (void)setArrMsgWrap:(id)arg1;
- (id)nsCurrTime;
- (void)setNsCurrTime:(id)arg1;
- (id)arrNotDownloadMsgWrap;
- (void)setArrNotDownloadMsgWrap:(id)arg1;
- (id)contentDateFormatter;
- (void)setContentDateFormatter:(id)arg1;
- (long long)expandMode;
- (void)setExpandMode:(long long)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (BOOL)keepTopMessageBlankLine;
- (void)setKeepTopMessageBlankLine:(BOOL)arg1;
- (BOOL)enableBulletPrefix;
- (void)setEnableBulletPrefix:(BOOL)arg1;
- (void).cxx_destruct;
@end
