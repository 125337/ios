@interface QScaleView : UIView
{
    UIColor * _borderColorRegular; // +0x8
    UIColor * _lightSegmentColorSatellite; // +0x10
    UIColor * _darkSegmentColorSatellite; // +0x18
    UIColor * _borderColorSatellite; // +0x20
    NSString * _metersAbbreviation; // +0x28
    NSString * _kilometersAbbreviation; // +0x30
    double * _magicNumbers; // +0x38
    int _oldNumberOfSegments; // +0x40
    int _segmentNumber; // +0x44
    double _resultSegmentLength; // +0x48
    double _resultSegmentLengthInMeters; // +0x50
    double _tempSegmentLengthInMeters; // +0x58
    NSArray * _scaleMetersArray; // +0x60
    UIView * _outlineView; // +0x68
    UIView * _verticalLineLeft; // +0x70
    UIView * _verticalLineRight; // +0x78
    QScaleUnitsView * _unitsView; // +0x80
    BOOL _useRegularStyle; // +0x88
    BOOL _isDarkMode; // +0x89
    double _distanceInMeters; // +0x90
    id <QScaleViewDelegate> _delegate; // +0x98
    NSString * _customFont; // +0xa0
}
- (void)dealloc;
- (id)init;
- (void)initAttributes;
- (void)initMagicNumber;
- (void)initBaseLayer;
- (void)updateOrigin:(CGPoint)arg1;
- (void)setUseRegularStyle:(BOOL)arg1;
- (void)updateScaleViewWithScaleLevel:(int)arg1 andDistanceMeters:(double)arg2;
- (void)calculateSegments;
- (void)calculateSegmentLength;
- (void)updateDisplayStyle;
- (void)updateOutlineView;
- (id)drawVerticalLine:(CGPoint)arg1 width:(double)arg2 height:(double)arg3;
- (void)updateUnitsView:(int)arg1;
- (void)notifyScaleSegmentLengthChange;
- (CGSize)getScaleViewMaxSize;
- (BOOL)checkRectIsValid:(CGRect)arg1;
- (BOOL)useRegularStyle;
- (double)distanceInMeters;
- (void)setDistanceInMeters:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)customFont;
- (void)setCustomFont:(id)arg1;
- (BOOL)isDarkMode;
- (void)setIsDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

