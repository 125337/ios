@interface MessageExpItem : MMObject <NSCopying>
{
    BOOL bNeedUpdateTitle; // +0x8
    BOOL bNeedUpdateDesc; // +0x9
    BOOL bAppMsgDefaultThumb; // +0xa
    BOOL bNeedHiddenAppTail; // +0xb
    unsigned int uiImageDownloadControlType; // +0xc
    unsigned int uiSightDownloadControlType; // +0x10
    NSString * nsExpIdStr; // +0x18
    NSString * nsAppMsgTitle; // +0x20
    NSString * nsAppMsgDesc; // +0x28
}
+ (id)genExpXMLFromMessageWrap:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (BOOL)isExpValid;
- (id)nsExpIdStr;
- (void)setNsExpIdStr:(id)arg1;
- (BOOL)bNeedUpdateTitle;
- (void)setBNeedUpdateTitle:(BOOL)arg1;
- (id)nsAppMsgTitle;
- (void)setNsAppMsgTitle:(id)arg1;
- (BOOL)bNeedUpdateDesc;
- (void)setBNeedUpdateDesc:(BOOL)arg1;
- (id)nsAppMsgDesc;
- (void)setNsAppMsgDesc:(id)arg1;
- (BOOL)bAppMsgDefaultThumb;
- (void)setBAppMsgDefaultThumb:(BOOL)arg1;
- (BOOL)bNeedHiddenAppTail;
- (void)setBNeedHiddenAppTail:(BOOL)arg1;
- (unsigned int)uiImageDownloadControlType;
- (void)setUiImageDownloadControlType:(unsigned int)arg1;
- (unsigned int)uiSightDownloadControlType;
- (void)setUiSightDownloadControlType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

