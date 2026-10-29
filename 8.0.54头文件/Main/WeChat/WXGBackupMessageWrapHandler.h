@interface WXGBackupMessageWrapHandler : NSObject
{
    WXGBackupEmoticonConverter * m_emoticonConverter; // +0x8
    NSMutableArray * m_mediaStructArray; // +0x10
    BakChatMsgItem * m_bakChatItem; // +0x18
    NSMutableArray * m_mediaIDArray; // +0x20
    NSMutableArray * m_mediaTypeArray; // +0x28
    BOOL m_bHandleRoam; // +0x30
    long long _mediaFormatSupport; // +0x38
}
+ (id)_getPrefix:(id)arg1 inRecordDataFields:(id)arg2 prefix:(id)arg3;
- (id)init;
- (void)dealloc;
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
- (void)addMediaStructWithMediaID:(id)arg1 withMediaPath:(id)arg2 withMediaType:(int)arg3 withMessageWrap:(id)arg4;
- (id)getMediaIDForMessage:(id)arg1 dataID:(id)arg2;
- (id)_getHDMediaIDForMessageWrap:(id)arg1;
- (id)_getMediaIDForMessageWrap:(id)arg1;
- (id)_getThumbMediaIDForMessageWrap:(id)arg1;
- (id)_getGNThumbMediaIDForMessageWrap:(id)arg1 withIndex:(unsigned int)arg2;
- (id)_getGNDataMediaIDForMessageWrap:(id)arg1 withIndex:(unsigned int)arg2;
- (id)_getMediaIDForMsgWrap:(id)arg1 withSuffix:(id)arg2;
- (id)_getMediaIDForMsgWrapThumb:(id)arg1 withSuffix:(id)arg2;
- (id)_getMeidaIDForHistoryMessageWrap:(id)arg1 withExtension:(id)arg2;
- (id)_getMeidaIDForThumbHistoryMessageWrap:(id)arg1 withExtension:(id)arg2;
- (long long)mediaFormatSupport;
- (void)setMediaFormatSupport:(long long)arg1;
- (void).cxx_destruct;
@end

