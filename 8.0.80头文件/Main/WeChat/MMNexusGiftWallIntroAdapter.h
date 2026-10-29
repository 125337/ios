@interface MMNexusGiftWallIntroAdapter : NSObject
{
    id /* block */ _onConfirm; // +0x8
    id /* block */ _onCancel; // +0x10
    id /* block */ _onClickGift; // +0x18
    MMNexusImageLoader * _imageLoader; // +0x20
}
+ (void)registerPageIfNeeded;
+ (BOOL)isNexusEnabled;
+ (void)_dismissInstance:(id)arg1;
- (BOOL)showFromNav:(id)arg1 rewardGiftName:(id)arg2 giftImgUrl:(id)arg3 avatarUrl:(id)arg4 avatarImage:(id)arg5 isFinderStyle:(BOOL)arg6 showSource:(int)arg7 fallback:(id /* block */)arg8;
- (void)_showCoreOnNav:(id)arg1 rewardGiftName:(id)arg2 images:(id)arg3 avatarPreloadedData:(id)arg4 isFinderStyle:(BOOL)arg5 showSource:(int)arg6 fallback:(id /* block */)arg7;
- (id)_currentLang;
- (id /* block */)onConfirm;
- (void)setOnConfirm:(id /* block */)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (id /* block */)onClickGift;
- (void)setOnClickGift:(id /* block */)arg1;
- (id)imageLoader;
- (void)setImageLoader:(id)arg1;
- (void).cxx_destruct;
@end
