/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUScrubberTilingLayout : PUSectionedTilingLayout {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentPadding;
    double  _currentItemFocusProgress;
    NSIndexPath * _currentItemIndexPath;
    double  _currentItemTransitionProgress;
    <PUScrubberTilingLayoutDelegate> * _delegate;
    struct { 
        BOOL respondsToAspectRatioForItemAtIndexPath; 
        BOOL respondsToExpandedWidthForItemAtIndexPath; 
    }  _delegateFlags;
    NSIndexPath * _expandedItemIndexPath;
    double  _expandedItemPlayheadProgress;
    double  _expandedItemWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _interItemSpacing;
    NSMutableDictionary * _layoutInfosByIndexPathByTileKind;
    double  _loupeAmount;
    NSIndexPath * _loupeIndexPath;
    NSIndexPath * _loupeNeighborIndexPath;
    double  _loupeTransitionProgress;
    double  _loupeWidth;
    double  _maxAspectRatio;
    BOOL  _onlyShowExpandedItem;
    NSIndexPath * _overrideLoupeIndexPath;
    double  _playheadVerticalOverhang;
    double  _slitAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _slitSize;
    BOOL  _snapToExpandedItem;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentPadding;
@property (nonatomic, readonly) double currentItemFocusProgress;
@property (nonatomic, readonly) NSIndexPath *currentItemIndexPath;
@property (nonatomic, readonly) double currentItemTransitionProgress;
@property (nonatomic) <PUScrubberTilingLayoutDelegate> *delegate;
@property (nonatomic, retain) NSIndexPath *expandedItemIndexPath;
@property (nonatomic) double expandedItemPlayheadProgress;
@property (nonatomic) double expandedItemWidth;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } focusPoint;
@property (nonatomic) struct CGSize { double x1; double x2; } interItemSpacing;
@property (nonatomic) double loupeAmount;
@property (nonatomic, readonly) NSIndexPath *loupeIndexPath;
@property (nonatomic, readonly) double loupeTransitionProgress;
@property (nonatomic) double maxAspectRatio;
@property (nonatomic) BOOL onlyShowExpandedItem;
@property (nonatomic, retain) NSIndexPath *overrideLoupeIndexPath;
@property (nonatomic) double playheadVerticalOverhang;
@property (nonatomic) double slitAspectRatio;
@property (nonatomic) BOOL snapToExpandedItem;

- (void).cxx_destruct;
- (float)_aspectRatioForIndexPath:(id)arg1;
- (id)_createLayoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (float)_focusAbscissa;
- (int)_indexOfItemClosestToAbscissa:(float)arg1 inSection:(int)arg2;
- (id)_indexPathOfItemClosestToAbscissa:(float)arg1;
- (float)_loupeAmountFor:(id)arg1;
- (float)_normalizedTransitionProgressFrom:(id)arg1 withAbscissa:(float)arg2 outNeighborIndexPath:(out id*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForItemAtIndexPath:(id)arg1 withLoupeTransform:(BOOL)arg2 withExpanded:(BOOL)arg3;
- (struct CGSize { double x1; double x2; })_slitSize;
- (float)_transformedHorizontalOffsetForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })_transformedSizeForIndexPath:(id)arg1;
- (void)addLayoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 section:(int)arg2 toSet:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentPadding;
- (float)currentItemFocusProgress;
- (id)currentItemIndexPath;
- (float)currentItemTransitionProgress;
- (id)delegate;
- (struct CGSize { double x1; double x2; })estimatedSectionSize;
- (id)expandedItemIndexPath;
- (float)expandedItemPlayheadProgress;
- (float)expandedItemWidth;
- (struct CGPoint { double x1; double x2; })focusPoint;
- (id)indexPathOfItemClosestToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })interItemSpacing;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (float)loupeAmount;
- (id)loupeIndexPath;
- (float)loupeTransitionProgress;
- (float)maxAspectRatio;
- (BOOL)onlyShowExpandedItem;
- (id)overrideLoupeIndexPath;
- (float)playheadVerticalOverhang;
- (id)preferredScrollInfo;
- (void)prepareLayout;
- (void)setContentPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpandedItemIndexPath:(id)arg1;
- (void)setExpandedItemPlayheadProgress:(float)arg1;
- (void)setExpandedItemWidth:(float)arg1;
- (void)setInterItemSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setLoupeAmount:(float)arg1;
- (void)setMaxAspectRatio:(float)arg1;
- (void)setOnlyShowExpandedItem:(BOOL)arg1;
- (void)setOverrideLoupeIndexPath:(id)arg1;
- (void)setPlayheadVerticalOverhang:(float)arg1;
- (void)setSlitAspectRatio:(float)arg1;
- (void)setSnapToExpandedItem:(BOOL)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeForSection:(int)arg1 numberOfItems:(int)arg2;
- (float)slitAspectRatio;
- (BOOL)snapToExpandedItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectForScrollingToItemAtIndexPath:(id)arg1 transitionProgress:(float)arg2;

@end