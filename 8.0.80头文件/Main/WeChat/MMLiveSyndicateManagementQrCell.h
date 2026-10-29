@interface MMLiveSyndicateManagementQrCell : UITableViewCell <MMLiveSyndicateManagementQrInvalidationWarningViewDelegate>
{
    BOOL _showOneOffInvalidationWarning; // +0x8
    BOOL _showContinuousInvalidationWarning; // +0x9
    BOOL _participantsFull; // +0xa
    MMLiveSyndicateModel * _model; // +0x10
    UILabel * _title; // +0x18
    UITextField * _secureTextField; // +0x20
    UIImageView * _qrImageView; // +0x28
    UIImageView * _fullIconView; // +0x30
    UILabel * _fullTitle; // +0x38
    MMUILabel * _caption; // +0x40
    UIView * _separator; // +0x48
    MMLiveSyndicateManagementQrInvalidationWarningView * _warningView; // +0x50
    NSString * _qrImageUri; // +0x58
    unsigned long long _settlementMode; // +0x60
    unsigned long long _expirationUnixEpochTime; // +0x68
}
+ (id)reuseId;
+ (double)heightAtWidth:(double)arg1 withModel:(id)arg2;
+ (id)captionWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setModel:(id)arg1;
- (BOOL)showingQrCode;
- (void)setShowOneOffInvalidationWarning:(BOOL)arg1;
- (void)setShowContinuousInvalidationWarning:(BOOL)arg1;
- (void)setParticipantsFull:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onWarningViewDismissed;
- (void)setQrImageWithContent:(id)arg1;
- (void)updateViewsVisibility;
- (id)model;
- (BOOL)showOneOffInvalidationWarning;
- (BOOL)showContinuousInvalidationWarning;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)secureTextField;
- (void)setSecureTextField:(id)arg1;
- (id)qrImageView;
- (void)setQrImageView:(id)arg1;
- (id)fullIconView;
- (void)setFullIconView:(id)arg1;
- (id)fullTitle;
- (void)setFullTitle:(id)arg1;
- (id)caption;
- (void)setCaption:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (id)warningView;
- (void)setWarningView:(id)arg1;
- (id)qrImageUri;
- (void)setQrImageUri:(id)arg1;
- (unsigned long long)settlementMode;
- (void)setSettlementMode:(unsigned long long)arg1;
- (unsigned long long)expirationUnixEpochTime;
- (void)setExpirationUnixEpochTime:(unsigned long long)arg1;
- (BOOL)participantsFull;
- (void).cxx_destruct;
@end
