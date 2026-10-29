@interface WAReportNativeProfilePageActionItem : WAReportBaseItem
{
    unsigned int _eventTime; // +0x8
    unsigned int _shareActionType; // +0xc
    unsigned long long _enterScene; // +0x10
    unsigned long long _eventID; // +0x18
    unsigned long long _result; // +0x20
    NSString * _shareId; // +0x28
    NSString * _shareTitle; // +0x30
    NSString * _sharePath; // +0x38
    NSString * _imageUrl; // +0x40
    unsigned long long _shopGuarantee; // +0x48
}
- (id)reportString;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)eventID;
- (void)setEventID:(unsigned long long)arg1;
- (unsigned long long)result;
- (void)setResult:(unsigned long long)arg1;
- (unsigned int)eventTime;
- (void)setEventTime:(unsigned int)arg1;
- (id)shareId;
- (void)setShareId:(id)arg1;
- (unsigned int)shareActionType;
- (void)setShareActionType:(unsigned int)arg1;
- (id)shareTitle;
- (void)setShareTitle:(id)arg1;
- (id)sharePath;
- (void)setSharePath:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (unsigned long long)shopGuarantee;
- (void)setShopGuarantee:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

