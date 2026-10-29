@interface _TtC6WeChat15MagicRewardView : UIView
{
     viewId; // +0x8
     _giftName; // +0x18
     _qualityLevel; // +0x28
     _pixelRatio; // +0x30
     repeatCount; // +0x38
     attributes; // +0x40
     $__lazy_storage_$_listeners; // +0x48
     $__lazy_storage_$_resListeners; // +0x50
}
- (id)giftName;
- (void)setGiftName:(id)arg1;
- (long long)qualityLevel;
- (void)setQualityLevel:(long long)arg1;
- (float)pixelRatio;
- (void)setPixelRatio:(float)arg1;
- (float)duration;
- (float)designAspectRatio;
- (unsigned long long)repeatCount;
- (void)setRepeatCount:(unsigned long long)arg1;
- (long long)usage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 attributes:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)playWithGiftParam:(id)arg1;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)updateObjectWithKey:(id)arg1 value:(id)arg2;
- (void)unload;
- (void)fetchIsPlaying:(id /* block */)arg1;
- (void)fetchStats:(id /* block */)arg1;
- (id)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (id)addResListener:(id)arg1;
- (void)removeResListener:(id)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

