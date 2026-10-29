@interface WAReportOuterMenuActionItem : WAReportBaseItem
{
    unsigned int _actionTimeStamp; // +0x8
    int _errcode; // +0xc
    unsigned long long _outScene; // +0x10
    unsigned long long _actionType; // +0x18
    NSString * _actionNote; // +0x20
    unsigned long long _actionResult; // +0x28
    NSString * _shareId; // +0x30
    long long _shareActionType; // +0x38
    NSString * _shareTitle; // +0x40
    NSString * _imageUrl; // +0x48
}
- (id)reportString;
- (unsigned long long)outScene;
- (void)setOutScene:(unsigned long long)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (id)actionNote;
- (void)setActionNote:(id)arg1;
- (unsigned int)actionTimeStamp;
- (void)setActionTimeStamp:(unsigned int)arg1;
- (unsigned long long)actionResult;
- (void)setActionResult:(unsigned long long)arg1;
- (int)errcode;
- (void)setErrcode:(int)arg1;
- (id)shareId;
- (void)setShareId:(id)arg1;
- (long long)shareActionType;
- (void)setShareActionType:(long long)arg1;
- (id)shareTitle;
- (void)setShareTitle:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (void).cxx_destruct;
@end
