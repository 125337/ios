@interface WCFinderPreviewHelper : NSObject
+ (id)parseSourceUrl:(id)arg1;
+ (id)supportPreviewType;
+ (BOOL)shouldShowLongPressAction:(id)arg1;
+ (BOOL)shouldShowLongPressActionAtMention:(id)arg1;
+ (id)longPressActionRowView:(id)arg1;
+ (id)longPressActionRowViewAtMention:(id)arg1;
+ (void)handleLongPressActionClickMentionRowView:(id)arg1 fromNav:(id)arg2;
+ (void)handleLongPressActionClickRowView:(id)arg1 fromNav:(id)arg2;
+ (Class)previewHandleClassForType:(id)arg1;
+ (Class)previewHandleClassForScanType:(int)arg1;
+ (void)handleQRCodeEvent:(id)arg1 fromNav:(id)arg2 complete:(id /* block */)arg3;
+ (void)_handleQRCodeEventResp:(id)arg1 fromNav:(id)arg2;
+ (void)jumpToMomentInfoPreview:(id)arg1 fromVC:(id)arg2;
+ (void)jumpToSource:(id)arg1 fromNav:(id)arg2 cardType:(int)arg3 enterType:(unsigned long long)arg4;
@end
