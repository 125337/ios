@interface WCFinderInteractionLabelDisplayHelper : NSObject
+ (id)displayLabelsFromLabels:(id)arg1 displayStyle:(unsigned long long)arg2 isFinderIdentity:(BOOL)arg3;
+ (long long)priorityForLabelType:(unsigned int)arg1;
+ (id)normalizedLabelFromLabel:(id)arg1;
+ (id)normalizedContent:(id)arg1 labelType:(unsigned int)arg2;
+ (id)content:(id)arg1 applyingColor:(id)arg2;
+ (id)tag:(id)arg1 settingAttribute:(id)arg2 value:(id)arg3 addIfMissing:(BOOL)arg4;
+ (id)escapedPlainText:(id)arg1;
@end
