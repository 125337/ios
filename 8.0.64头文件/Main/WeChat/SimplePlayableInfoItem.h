@interface SimplePlayableInfoItem : NSObject
{
    BOOL _isSelected; // +0x8
    MMListenSimplePlayableInfo * _info; // +0x10
    RingTone * _ringtone; // +0x18
}
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (id)ringtone;
- (void)setRingtone:(id)arg1;
- (void).cxx_destruct;
@end
