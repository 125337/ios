@interface MMBGMSelectedTabTableViewCellConfig : NSObject
{
    BOOL _showLongSeparatorLine; // +0x8
    NSString * _hightlightQuery; // +0x10
    unsigned long long _targetType; // +0x18
}
- (BOOL)showLongSeparatorLine;
- (void)setShowLongSeparatorLine:(BOOL)arg1;
- (id)hightlightQuery;
- (void)setHightlightQuery:(id)arg1;
- (unsigned long long)targetType;
- (void)setTargetType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

