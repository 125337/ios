@interface WXGBackupMessageWrapHandler : NSObject
{
    WXGBackupEmoticonConverter * m_emoticonConverter; // +0x8
    NSMutableArray * m_mediaStructArray; // +0x10
    BakChatMsgItem * m_bakChatItem; // +0x18
    NSMutableArray * m_mediaIDArray; // +0x20
    NSMutableArray * m_mediaTypeArray; // +0x28
    NSMutableArray * m_mediaIDArrayFastly; // +0x30
    NSMutableArray * m_mediaTypeArrayFastly; // +0x38
    NSMutableArray * m_mediaPathArrayFastly; // +0x40
    BOOL m_bHandleRoam; // +0x48
    BOOL _isTextOnly; // +0x49
    BOOL _isSupportWxam; // +0x4a
    BOOL _isRoamBackup; // +0x4b
    BOOL _isFastRoamBackup; // +0x4c
    long long _mediaFormatSupport; // +0x50
}
+ (id)_getPrefix:(id)arg1 inRecordDataFields:(id)arg2 prefix:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)handleRoamMessageWrapFastly:(id)arg1 RoamMsgItem:(id)arg2 RoamMediaInfo:(id)arg3 TextOnly:(BOOL)arg4;
- (id)handleRoamMessageWrap:(id)arg1;
- (id)handleMessageWrap:(id)arg1;
- (id)handleMessageWrap:(id)arg1 mediaFormatSupport:(int)arg2;
- (id)p_handleMessageWrap:(id)arg1;
- (id)covertNewXmlMsgIfNeed:(id)arg1;
- (id)covertSolitaireMsgToTextMsg:(id)arg1;
- (id)getBackupHEIFConvertPathWithExtension:(id)arg1;
- (BOOL)p_messageWrapHasMedia:(id)arg1;
- (void)p_getMediaInfoForMessageWrap:(id)arg1;
- (void)p_getMediaForImg:(id)arg1;
- (void)p_getMediaForVoice:(id)arg1;
- (void)p_getMediaForVideo:(id)arg1;
- (void)p_getMediaForSight:(id)arg1;
- (void)p_getMediaForEmoticon:(id)arg1;
- (void)p_getMediaForAppMsg:(id)arg1;
- (void)p_innerGetNestedMediaForAppMsgDataList:(id)arg1 withPrefixExtension:(id)arg2 ofMsgWrap:(id)arg3;
- (void)p_innerGetMediaForAppMsgFav:(id)arg1;
- (void)p_innerGetMediaForGroupNoticeMsg:(id)arg1;
- (void)p_innerGetMediaForAppMsg:(id)arg1;
- (void)p_getMediaForHistorySysNewXml:(id)arg1;
- (void)p_innerGetMediaForHistoryDataList:(id)arg1 withPrefixExtension:(id)arg2 ofMessageWrap:(id)arg3;
- (void)addMediaStructWithMediaID:(id)arg1 withMediaPath:(id)arg2 withMediaType:(int)arg3 withMediaCdnUrl:(id)arg4 withMediaCdnType:(unsigned int)arg5 withMediaCdnSize:(unsigned long long)arg6 withMediaAesKey:(id)arg7 withMessageWrap:(id)arg8;
- (void)addMediaStructWithMediaIDFastly:(id)arg1 withMediaPath:(id)arg2 withMediaType:(int)arg3 withMessageWrap:(id)arg4;
- (id)getMediaIDForMessage:(id)arg1 dataID:(id)arg2;
- (id)_getHDLiveMediaIDForMessageWrap:(id)arg1;
- (id)_getLiveMediaIDForMessageWrap:(id)arg1;
- (id)_getHDMediaIDForMessageWrap:(id)arg1;
- (id)_getMediaIDForMessageWrap:(id)arg1;
- (id)_getThumbMediaIDForMessageWrap:(id)arg1;
- (id)_getGNThumbMediaIDForMessageWrap:(id)arg1 withIndex:(unsigned int)arg2;
- (id)_getGNDataMediaIDForMessageWrap:(id)arg1 withIndex:(unsigned int)arg2;
- (id)_getMediaIDForMsgWrap:(id)arg1 withSuffix:(id)arg2;
- (id)_getMediaIDForMsgWrapThumb:(id)arg1 withSuffix:(id)arg2;
- (id)_getMeidaIDForHistoryMessageWrap:(id)arg1 withExtension:(id)arg2;
- (id)_getMeidaIDForThumbHistoryMessageWrap:(id)arg1 withExtension:(id)arg2;
- (BOOL)isTextOnly;
- (void)setIsTextOnly:(BOOL)arg1;
- (BOOL)isSupportWxam;
- (void)setIsSupportWxam:(BOOL)arg1;
- (long long)mediaFormatSupport;
- (void)setMediaFormatSupport:(long long)arg1;
- (BOOL)isRoamBackup;
- (void)setIsRoamBackup:(BOOL)arg1;
- (BOOL)isFastRoamBackup;
- (void)setIsFastRoamBackup:(BOOL)arg1;
- (void).cxx_destruct;
@end
