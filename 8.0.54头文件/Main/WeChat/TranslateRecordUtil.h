@interface TranslateRecordUtil : MMObject
+ (BOOL)couldTranslateRecordItem:(id)arg1;
+ (BOOL)canShowTranslateViewWithRecordItem:(id)arg1;
+ (BOOL)canShowTranslateMenuItemWithRecordItem:(id)arg1;
+ (BOOL)canShowTranslatedTextWithRecordItem:(id)arg1;
+ (CGSize)calculateTranslatedTextSizeWithRecordItem:(id)arg1;
+ (CGSize)calculateTranslatedTextSizeWithRecordText:(id)arg1;
@end

