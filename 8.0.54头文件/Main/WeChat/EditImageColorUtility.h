@interface EditImageColorUtility : NSObject
+ (id)getDefaultEditImageColor;
+ (id)getNewYearEditImageColor;
+ (id)getEditImageColors;
+ (id)getEditImageColorFromColor:(id)arg1 allowDifference:(BOOL)arg2;
+ (id)hexColorStringFromColor:(id)arg1 withHash:(BOOL)arg2;
+ (double)colorDifferenceBetweenColorA:(id)arg1 andColorB:(id)arg2;
@end

