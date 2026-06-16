// ============================================================
// Image: Assembly-CSharp.dll
// ============================================================

// Namespace: <global>
class GameLog
{
public:

    // Methods
    static void Log(Il2CppObject* message);  // RVA: 0x4B6EE0
    static void Log(Il2CppObject* message, Il2CppObject* context);  // RVA: 0x4B6E80
};

// Namespace: <global>
class SpriteCollection : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    Sprite[][] sprites; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4B6FB0
};

// Namespace: <global>
struct MonoScriptData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Byte[][] FilePathsData; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Byte[][] TypesData; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t TotalTypes; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t TotalFiles; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    bool IsEditorOnly; // 0x0028
};

// Namespace: <global>
class UnitySourceGeneratedAssemblyMonoScriptTypes_v1
{
public:

    // Methods
    static MonoScriptData Get();  // RVA: 0x4BD640
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
struct Side
{
public:
    // Static fields
    // static Side Right;
    // static Side Left;
    // static Side Above;
    // static Side Below;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class ActionButtonTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* tooltipText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Func<System.String> textProvider; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* runtimePanel; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        bool usingScenePanel; // 0x0038
        bool isHovering; // 0x0039
        uint8_t pad_003A[0x6]; // 0x003A
        Il2CppString* lastShownText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Side side; // 0x0048
    
        // Methods
        void SetTooltipText(Il2CppString* text);  // RVA: 0x4A7D80
        void SetTooltipTextProvider(System.Func<System.String> provider);  // RVA: 0x4A7D70
        void SetSide(Side s);  // RVA: 0x4A7D60
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4A7B00
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4A7AD0
        void OnDisable();  // RVA: 0x4A7AD0
        void Update();  // RVA: 0x4A7DB0
        void HideTooltip();  // RVA: 0x4A7980
        GameObject* CreateRuntimePanel(Il2CppString* textContent);  // RVA: 0x4A7260
        void .ctor();  // RVA: 0x4A7F80
    };

    // Namespace: AutoBattle.UI
    class ActionTooltipPanel : public MonoBehaviour
    {
    public:
        // Static fields
        // static ActionTooltipPanel* <Instance>k__BackingField;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* panelRect; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text* tooltipText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float padding; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float gap; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float maxWidth; // 0x0038
    
        // Methods
        static ActionTooltipPanel* get_Instance();  // RVA: 0x4A8E50
        static void set_Instance(ActionTooltipPanel* value);  // RVA: 0x4A8E90
        void Awake();  // RVA: 0x4A7FD0
        void OnDestroy();  // RVA: 0x4A8250
        void Show(Il2CppString* text, RectTransform* anchorRect, Side side);  // RVA: 0x4A8980
        static void PositionPanel(RectTransform* panelRect, RectTransform* anchorRect, RectTransform* canvasRT, Side side, float panelWidth, float panelHeight, float gapPx);  // RVA: 0x4A8320
        void Hide();  // RVA: 0x4A8220
        static Canvas* GetRootCanvas(Component* c);  // RVA: 0x4A80C0
        void .ctor();  // RVA: 0x4A8E30
    };

    // Namespace: AutoBattle.UI
    class AnimatedHPBar : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite[][] frames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float fps; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Image* fillImage; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* ghostImage; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float ghostLingerDuration; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float ghostFadeDuration; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        Color ghostLightColor; // 0x0048
        uint8_t pad_0049[0xF]; // 0x0049
        float currentFill; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        int32_t frameIndex; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float frameTimer; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        bool ghostFading; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float ghostElapsed; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        Color ghostStartColor; // 0x006C
        uint8_t pad_006D[0xF]; // 0x006D
        Color ghostEndColor; // 0x007C
    
        // Methods
        void Awake();  // RVA: 0x4A8FC0
        void OnEnable();  // RVA: 0x4A9050
        void Update();  // RVA: 0x4A9450
        void UpdateFill(float newFill);  // RVA: 0x4A92F0
        void SetFillImmediate(float newFill);  // RVA: 0x4A9160
        void TriggerGhost(float oldFill);  // RVA: 0x4A9250
        static void ApplyFill(Image* img, float value);  // RVA: 0x4A8EF0
        void .ctor();  // RVA: 0x4A9700
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <PlayLoop>d__10
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AnimatedIconHover* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BA290
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BA3E0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class AnimatedIconHover : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* targetImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite[][] frames; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float fps; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite* staticSprite; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Coroutine* animCoroutine; // 0x0040
    
        // Methods
        void Awake();  // RVA: 0x4A9730
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4A9820
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4A9810
        void OnDisable();  // RVA: 0x4A9810
        void StopAndReset();  // RVA: 0x4A9990
        IEnumerator* PlayLoop();  // RVA: 0x4A9920
        void .ctor();  // RVA: 0x4A9A40
    };

    // Namespace: AutoBattle.UI
    class ArenaBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* cieloSprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* livello1Sprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* lunaSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite[][] starsFrames; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float starsFrameRate; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        int32_t starsTrailingFramesToSkip; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        Vector2 moonStart; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Vector2 moonEnd; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float moonSpeed; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        bool moonPingPong; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        RectTransform* cieloLayer; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        RectTransform* starsLayer; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        RectTransform* lunaLayer; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        RectTransform* livello1Layer; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        RectTransform* rect; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Image* starsImage; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        int32_t starsFrameIdx; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        float starsFrameTimer; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        Image* lunaImage; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        float moonT; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        int32_t moonDir; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        bool built; // 0x00A8
    
        // Methods
        void Awake();  // RVA: 0x4A9A50
        void OnEnable();  // RVA: 0x4AA190
        void Build();  // RVA: 0x4A9AB0
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size);  // RVA: 0x4A9F40
        void Update();  // RVA: 0x4AA320
        void SetSprites(Sprite* cielo, Sprite[][] stars, Sprite* luna, Sprite* livello1);  // RVA: 0x4AA2B0
        void .ctor();  // RVA: 0x4AA670
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<System.String> <>9__127_6;
    // static System.Func<System.String> <>9__127_7;
    // static System.Func<System.String> <>9__127_1;
    // static System.Func<System.String> <>9__127_2;
    // static System.Func<System.String> <>9__127_3;
    // static UnityAction* <>9__127_4;
    // static System.Func<System.String> <>9__127_5;
    // static System.Func<System.String> <>9__127_10;
    // static System.Func<System.String> <>9__128_0;
    // static System.Func<System.String> <>9__130_0;


    // Methods
    static void .cctor();  // RVA: 0x4BD460
    void .ctor();  // RVA: 0x4BD420
    Il2CppString* <Start>b__127_6();  // RVA: 0x4BD2F0
    Il2CppString* <Start>b__127_7();  // RVA: 0x4BD350
    Il2CppString* <Start>b__127_1();  // RVA: 0x4BD170
    Il2CppString* <Start>b__127_2();  // RVA: 0x4BD1D0
    Il2CppString* <Start>b__127_3();  // RVA: 0x4BD230
    void <Start>b__127_4();  // RVA: 0x4B53F0
    Il2CppString* <Start>b__127_5();  // RVA: 0x4BD290
    Il2CppString* <Start>b__127_10();  // RVA: 0x4BCFC0
    Il2CppString* <AttachPlayerHpTooltip>b__128_0();  // RVA: 0x4BCC00
    Il2CppString* <AttachPlayerXpTooltip>b__130_0();  // RVA: 0x4BCE10
};

// Namespace: <global>
class <>c__DisplayClass190_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* droppedItem; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <ShowPopupCard>b__0(ItemData* t);  // RVA: 0x4BD430
};

// Namespace: <global>
class <>c__DisplayClass203_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <RefreshDropsList>b__0(ItemData* t);  // RVA: 0x4BD430
};

// Namespace: <global>
class <>c__DisplayClass215_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* weaponInstance; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetEquippedWeaponData>b__0(ItemData* d);  // RVA: 0x4BD430
};

// Namespace: <global>
class <ApplyDamageVisualsAfterDelay>d__178
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float delay; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CombatTurnResult* result; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    BattleScreenUI* <>4__this; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4B7510
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B7CF0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <CombatEndPopupSequence>d__185
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CombatResult* result; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool <willShowAnyPopup>5__2; // 0x0030
    bool <delayPanel>5__3; // 0x0031

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4B7D30
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8DC0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <FlashBar>d__214
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4B8F40
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8F50
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <FlashEnemyHitRed>d__208
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Color <orig>5__2; // 0x0028
    uint8_t pad_0029[0xF]; // 0x0029
    Color <red>5__3; // 0x0038
    uint8_t pad_0039[0xF]; // 0x0039
    int32_t <i>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4B8F90
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B92B0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <PlayAnimImage>d__153
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4B9430
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B9600
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <PlayDefeatAnimCoroutine>d__156
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <i>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4B9640
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B97F0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <PlayEffectOverlay>d__209
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Image* effectImage; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Sprite[][] effectFrames; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float delaySec; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <frameDuration>5__2; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int32_t <i>5__3; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4B9830
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B9AD0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <PlayFadeOutInCoroutine>d__182
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float fadeInDuration; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float fadeOutDuration; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float <t>5__2; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4B9B10
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B9E20
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <PlayLevelCompleteAnimCoroutine>d__159
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <i>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BA050
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BA250
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <PlayProjectileImpact>d__222
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemData* weaponData; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RectTransform* canvasRect; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Vector2 position; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Sprite[][] <frames>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GameObject* <go>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Image* <img>5__4; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    float <perFrame>5__5; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    int32_t <i>5__6; // 0x0054

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BA420
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BAB10
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <PlayStaminaBtnIconAnim>d__160
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BAB50
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BACB0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <PlayVsAnimation>d__184
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <frameDuration>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <i>5__3; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float <elapsed>5__4; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BACF0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BAF30
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <RefreshBattleTextsNextFrame>d__167
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BAF70
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BB280
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <RefreshTitleFrameHeightCoroutine>d__267
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BB2C0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BB440
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <ShowPopupCoroutine>d__187
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* headerText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* subtitleText; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ItemInstance* dropItem; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float duration; // 0x0040

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BB710
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BB910
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <SpawnProjectileSpread>d__217
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemData* weaponData; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float extraSpawnDelay; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t count; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    bool suppressLunge; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    BattleScreenUI* <>4__this; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    RectTransform* from; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    RectTransform* to; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    SpriteAnimator* lungeAnimator; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    float <spread>5__2; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float <delay>5__3; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    int32_t <pi>5__4; // 0x0060

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BB950
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BBC60
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <SpawnProjectileVFX>d__221
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    RectTransform* from; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RectTransform* to; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ItemData* weaponData; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float extraSpawnDelay; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    SpriteAnimator* lungeAnimator; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    BattleScreenUI* <>4__this; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    bool triggerLungeOnSpawn; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float verticalOffset; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float <travelTime>5__2; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float <arcHeight>5__3; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    RectTransform* <canvasRect>5__4; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Vector2 <fromLocal>5__5; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Vector2 <toLocal>5__6; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Sprite[][] <frames>5__7; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    GameObject* <go>5__8; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    RectTransform* <rt>5__9; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Image* <img>5__10; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Vector2 <dir>5__11; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    float <elapsed>5__12; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    int32_t <frameIdx>5__13; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float <frameTimer>5__14; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float <frameDuration>5__15; // 0x00AC

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BBCA0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BCBC0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <WaitForPopupDurationOrSkip>d__188
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool skippable; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float duration; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    BattleScreenUI* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float <elapsed>5__2; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BD4D0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BD600
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class BattleScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static Vector2 PlayerSlashOnPlayerPos;
        // static float DAMAGE_APPLY_DELAY;
        // static float WEAPON_PHANTOM_DURATION;
        // static int32_t MAX_LOG_LINES;
        // static float PROJECTILE_TRAVEL_TIME_FALLBACK;
        // static System.Collections.Generic.Dictionary<System.String,System.Single> kEnemyContentCenterOffsetPx;
        // static System.Collections.Generic.Dictionary<System.String,System.ValueTuple<System.Single,System.Single>> kEnemyAnimati
        uint8_t pad_0000[0x20]; // 0x0000
        Image* battleBackground; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* battleFrame; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* outskirtsBackground; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* villageBackground; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        GameObject* graveyardBackground; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* forestBackground; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        GameObject* arenaBackground; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        RectTransform* titleFrame; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        TMP_Text* sectorLabel; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        TMP_Text* battleProgressLabel; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Image* sectorBarFill; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        TMP_Text* playerNameText; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        TMP_Text* playerLevelText; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        TMP_Text* playerHpText; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Image* playerHpBarEmpty; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Image* playerHpBarFill; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        TMP_Text* enemyNameText; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        TMP_Text* enemyLevelText; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        TMP_Text* enemyHpText; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Image* enemyHpBarEmpty; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Image* enemyHpBarFill; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Color enemyNameColorVerde; // 0x00C8
        uint8_t pad_00C9[0xF]; // 0x00C9
        Color enemyNameColorGiallo; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        Color enemyNameColorViola; // 0x00E8
        uint8_t pad_00E9[0xF]; // 0x00E9
        TMP_Text* xpLabel; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Image* xpBarFill; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        TMP_Text* battleLevelLabel; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        Image* staminaIconEmpty; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        Image* staminaIconFull; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        TMP_Text* staminaLabel; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        GameObject* logPanelOverlay; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        TMP_Text* battleLogText; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        ScrollRect* battleLogScroll; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        Button* logToggleButton; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        Button* logCloseButton; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        SidePanelController* logSidePanel; // 0x0150
        uint8_t pad_0151[0x7]; // 0x0151
        GameObject* logSelectedOverlay; // 0x0158
        uint8_t pad_0159[0x7]; // 0x0159
        Transform* dropsListParent; // 0x0160
        uint8_t pad_0161[0x7]; // 0x0161
        GameObject* dropItemPrefab; // 0x0168
        uint8_t pad_0169[0x7]; // 0x0169
        Button* dropsToggleButton; // 0x0170
        uint8_t pad_0171[0x7]; // 0x0171
        GameObject* dropsSelectedOverlay; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        GameObject* dropsPanelOverlay; // 0x0180
        uint8_t pad_0181[0x7]; // 0x0181
        SidePanelController* dropsSidePanel; // 0x0188
        uint8_t pad_0189[0x7]; // 0x0189
        GameObject* resultPanel; // 0x0190
        uint8_t pad_0191[0x7]; // 0x0191
        TextAnimator_TMP* resultText; // 0x0198
        uint8_t pad_0199[0x7]; // 0x0199
        TMP_Text* rewardText; // 0x01A0
        uint8_t pad_01A1[0x7]; // 0x01A1
        GameObject* resultDropCard; // 0x01A8
        uint8_t pad_01A9[0x7]; // 0x01A9
        GameObject* resultCover; // 0x01B0
        uint8_t pad_01B1[0x7]; // 0x01B1
        Image* animImage; // 0x01B8
        uint8_t pad_01B9[0x7]; // 0x01B9
        Sprite[][] animItemFrames; // 0x01C0
        uint8_t pad_01C1[0x7]; // 0x01C1
        float animFps; // 0x01C8
        uint8_t pad_01C9[0x7]; // 0x01C9
        GameObject* defeatGO; // 0x01D0
        uint8_t pad_01D1[0x7]; // 0x01D1
        Image* defeatImage; // 0x01D8
        uint8_t pad_01D9[0x7]; // 0x01D9
        Sprite[][] defeatFrames; // 0x01E0
        uint8_t pad_01E1[0x7]; // 0x01E1
        float defeatFps; // 0x01E8
        uint8_t pad_01E9[0x7]; // 0x01E9
        GameObject* levelCompleteGO; // 0x01F0
        uint8_t pad_01F1[0x7]; // 0x01F1
        Image* levelCompleteImage; // 0x01F8
        uint8_t pad_01F9[0x7]; // 0x01F9
        Sprite[][] levelCompleteFrames; // 0x0200
        uint8_t pad_0201[0x7]; // 0x0201
        float levelCompleteFps; // 0x0208
        uint8_t pad_0209[0x7]; // 0x0209
        Image* staminaBtnIcon; // 0x0210
        uint8_t pad_0211[0x7]; // 0x0211
        Sprite[][] staminaBtnIconFrames; // 0x0218
        uint8_t pad_0219[0x7]; // 0x0219
        float staminaBtnIconFps; // 0x0220
        uint8_t pad_0221[0x7]; // 0x0221
        Coroutine* staminaIconCoroutine; // 0x0228
        uint8_t pad_0229[0x7]; // 0x0229
        Button* settingsToggleButton; // 0x0230
        uint8_t pad_0231[0x7]; // 0x0231
        Sprite* settingsOpenSprite; // 0x0238
        uint8_t pad_0239[0x7]; // 0x0239
        Sprite* settingsClosedSprite; // 0x0240
        uint8_t pad_0241[0x7]; // 0x0241
        GameObject* settingsBar; // 0x0248
        uint8_t pad_0249[0x7]; // 0x0249
        Button* settingsQuitButton; // 0x0250
        uint8_t pad_0251[0x7]; // 0x0251
        Button* settingsOptionsButton; // 0x0258
        uint8_t pad_0259[0x7]; // 0x0259
        Button* settingsStatsButton; // 0x0260
        uint8_t pad_0261[0x7]; // 0x0261
        Button* settingsScaleButton; // 0x0268
        uint8_t pad_0269[0x7]; // 0x0269
        GameObject* settingsPanel; // 0x0270
        uint8_t pad_0271[0x7]; // 0x0271
        Image* playerSpriteImage; // 0x0278
        uint8_t pad_0279[0x7]; // 0x0279
        Image* enemySpriteImage; // 0x0280
        uint8_t pad_0281[0x7]; // 0x0281
        Image* playerSlashImage; // 0x0288
        uint8_t pad_0289[0x7]; // 0x0289
        Image* enemyEffectImage; // 0x0290
        uint8_t pad_0291[0x7]; // 0x0291
        Vector2 parryEffectPos; // 0x0298
        uint8_t pad_0299[0x7]; // 0x0299
        Image* parryEffectImage; // 0x02A0
        uint8_t pad_02A1[0x7]; // 0x02A1
        SpriteCollection* parryEffectCollection; // 0x02A8
        uint8_t pad_02A9[0x7]; // 0x02A9
        Coroutine* parryEffectRoutine; // 0x02B0
        uint8_t pad_02B1[0x7]; // 0x02B1
        Vector2 enemyParryEffectPos; // 0x02B8
        uint8_t pad_02B9[0x7]; // 0x02B9
        Image* enemyParryEffectImage; // 0x02C0
        uint8_t pad_02C1[0x7]; // 0x02C1
        Coroutine* enemyParryEffectRoutine; // 0x02C8
        uint8_t pad_02C9[0x7]; // 0x02C9
        Transform* damagePopupContainer; // 0x02D0
        uint8_t pad_02D1[0x7]; // 0x02D1
        BattleVfxOverlay* battleVfxOverlay; // 0x02D8
        uint8_t pad_02D9[0x7]; // 0x02D9
        GameObject* pvpLabel; // 0x02E0
        uint8_t pad_02E1[0x7]; // 0x02E1
        TMP_Text* suddenDeathLabel; // 0x02E8
        uint8_t pad_02E9[0x7]; // 0x02E9
        CanvasGroup* playerHpBar; // 0x02F0
        uint8_t pad_02F1[0x7]; // 0x02F1
        CanvasGroup* enemyHpBar; // 0x02F8
        uint8_t pad_02F9[0x7]; // 0x02F9
        AnimatedHPBar* playerAnimatedHpBar; // 0x0300
        uint8_t pad_0301[0x7]; // 0x0301
        AnimatedHPBar* enemyAnimatedHpBar; // 0x0308
        uint8_t pad_0309[0x7]; // 0x0309
        SpriteAnimator* playerAnimator; // 0x0310
        uint8_t pad_0311[0x7]; // 0x0311
        SpriteAnimator* enemyAnimator; // 0x0318
        uint8_t pad_0319[0x7]; // 0x0319
        EquipOverlayController* battleOverlay; // 0x0320
        uint8_t pad_0321[0x7]; // 0x0321
        EquipOverlayController* enemyPvPOverlay; // 0x0328
        uint8_t pad_0329[0x7]; // 0x0329
        DamagePopup* damagePopup; // 0x0330
        uint8_t pad_0331[0x7]; // 0x0331
        CombatManager* combatManager; // 0x0338
        uint8_t pad_0339[0x7]; // 0x0339
        System.Collections.Generic.List<System.String> battleLogLines; // 0x0340
        uint8_t pad_0341[0x7]; // 0x0341
        EnemyState* currentEnemy; // 0x0348
        uint8_t pad_0349[0x7]; // 0x0349
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> sessionDrops; // 0x0350
        uint8_t pad_0351[0x7]; // 0x0351
        bool logPanelOpen; // 0x0358
        bool settingsBarOpen; // 0x0359
        uint8_t pad_035A[0x6]; // 0x035A
        GameObject* dropsBadge; // 0x0360
        uint8_t pad_0361[0x7]; // 0x0361
        int32_t seenDropsCount; // 0x0368
        uint8_t pad_0369[0x7]; // 0x0369
        Image* pvpEnemySlashImage; // 0x0370
        uint8_t pad_0371[0x7]; // 0x0371
        bool isPopupSequenceActive; // 0x0378
        uint8_t pad_0379[0x7]; // 0x0379
        Coroutine* activePopupSequence; // 0x0380
        uint8_t pad_0381[0x7]; // 0x0381
        GameObject* fadeOverlayGO; // 0x0388
        uint8_t pad_0389[0x7]; // 0x0389
        Image* fadeOverlayImage; // 0x0390
        uint8_t pad_0391[0x7]; // 0x0391
        bool isFadeActive; // 0x0398
        uint8_t pad_0399[0x7]; // 0x0399
        Image* vsImage; // 0x03A0
        uint8_t pad_03A1[0x7]; // 0x03A1
        int32_t vsFrameRate; // 0x03A8
        uint8_t pad_03A9[0x7]; // 0x03A9
        Sprite[][] vsFrames; // 0x03B0
        uint8_t pad_03B1[0x7]; // 0x03B1
        bool isVsAnimationActive; // 0x03B8
        uint8_t pad_03B9[0x7]; // 0x03B9
        GameObject* playerTooltipHitbox; // 0x03C0
        uint8_t pad_03C1[0x7]; // 0x03C1
        GameObject* enemyTooltipHitbox; // 0x03C8
        uint8_t pad_03C9[0x7]; // 0x03C9
        RectTransform* overlayBattleScreenRT; // 0x03D0
        uint8_t pad_03D1[0x7]; // 0x03D1
        Vector2 playerIdleLocalCanvas; // 0x03D8
        uint8_t pad_03D9[0x7]; // 0x03D9
        bool playerIdleCached; // 0x03E0
        uint8_t pad_03E1[0x3]; // 0x03E1
        Vector2 enemyIdleLocalCanvas; // 0x03E4
        uint8_t pad_03E5[0x7]; // 0x03E5
        bool enemyIdleCached; // 0x03EC
        uint8_t pad_03ED[0x3]; // 0x03ED
        Coroutine* animCoroutine; // 0x03F0
        uint8_t pad_03F1[0x7]; // 0x03F1
        Coroutine* defeatAnimCoroutine; // 0x03F8
        uint8_t pad_03F9[0x7]; // 0x03F9
        Coroutine* levelCompleteAnimCoroutine; // 0x0400
        uint8_t pad_0401[0x7]; // 0x0401
        LeaderboardUI* leaderboardUI; // 0x0408
        uint8_t pad_0409[0x7]; // 0x0409
        bool dropsGridLayoutEnsured; // 0x0410
        uint8_t pad_0411[0x7]; // 0x0411
        Canvas* _cachedWorldCanvas; // 0x0418
        uint8_t pad_0419[0x7]; // 0x0419
        bool _worldCanvasLookupTried; // 0x0420
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x4A1B30
        static Il2CppString* T(Il2CppString* key, Object[][] args);  // RVA: 0x4A1AC0
        static Il2CppString* LocalizeEnemyDisplayName(Il2CppString* fullName, Il2CppString* categoryName);  // RVA: 0x49A230
        bool get_IsPopupSequenceActive();  // RVA: 0x4A7060
        bool get_IsFadeActive();  // RVA: 0x4A7050
        bool get_IsVsAnimationActive();  // RVA: 0x4A7070
        void Start();  // RVA: 0x49FF60
        void AttachPlayerHpTooltip();  // RVA: 0x48F9D0
        void AttachEnemyHpTooltip();  // RVA: 0x48F840
        void AttachPlayerXpTooltip();  // RVA: 0x48FBF0
        void SetupDamagePopup();  // RVA: 0x49E400
        void EnsureTooltipHitboxProxies();  // RVA: 0x493180
        void SyncTooltipHitboxes();  // RVA: 0x499EF0
        void SyncOneTooltipHitbox(GameObject* proxy, Image* targetSprite, Vector2 localOffsetCanvasUnits, bool idleCached, Vector2 idleLocalCanvas);  // RVA: 0x4A1660
        void LateUpdate();  // RVA: 0x499EF0
        void OnEnable();  // RVA: 0x49AC40
        void OnDisable();  // RVA: 0x49A360
        void ToggleLogPanel();  // RVA: 0x4A1E40
        void ToggleDropsPanel();  // RVA: 0x4A1B90
        void SetPanelOverlays(bool log, bool drops);  // RVA: 0x49E0D0
        static void AddTooltipToButton(Button* btn, System.Func<System.String> textProvider, Side side);  // RVA: 0x48F430
        void ToggleSettingsBar();  // RVA: 0x4A1FE0
        void UpdateSettingsToggleIcon();  // RVA: 0x4A6190
        void SetResultPanelActive(bool active, bool showAnim, bool playSfx);  // RVA: 0x49E1B0
        IEnumerator* PlayAnimImage();  // RVA: 0x49B640
        void PlayDefeatAnimation();  // RVA: 0x49B720
        IEnumerator* PlayDefeatAnimCoroutine();  // RVA: 0x49B6B0
        void PlayLevelCompleteAnimation();  // RVA: 0x49BC00
        IEnumerator* PlayLevelCompleteAnimCoroutine();  // RVA: 0x49BB90
        IEnumerator* PlayStaminaBtnIconAnim();  // RVA: 0x49BFE0
        void OnQuitClicked();  // RVA: 0x49B4C0
        void OnLeaderboardClicked();  // RVA: 0x49B3E0
        void ToggleSettingsPanel();  // RVA: 0x4A2140
        void RefreshBattleUI();  // RVA: 0x49C2D0
        void HandleLanguageChanged();  // RVA: 0x497EB0
        IEnumerator* RefreshBattleTextsNextFrame();  // RVA: 0x49C260
        void EnsureSuddenDeathLabel();  // RVA: 0x492D00
        void UpdateProgressDisplay(int32_t sector);  // RVA: 0x4A5530
        void UpdatePlayerHpDisplay(PlayerState* player);  // RVA: 0x4A51F0
        void UpdateEnemyHpDisplay(EnemyState* enemy);  // RVA: 0x4A35F0
        void UpdateXpDisplay(PlayerState* player);  // RVA: 0x4A6460
        void UpdateStaminaDisplay(PlayerState* player);  // RVA: 0x4A6270
        void RefreshEnemyNameLabel(EnemyState* enemy);  // RVA: 0x49D340
        void HandleCombatStart(EnemyState* enemy);  // RVA: 0x496C10
        void HandleCombatTurn(CombatTurnResult* result);  // RVA: 0x497720
        IEnumerator* ApplyDamageVisualsAfterDelay(CombatTurnResult* result, float delay);  // RVA: 0x48F7A0
        void HandleCombatEnd(CombatResult* result);  // RVA: 0x495A40
        void HandleStaminaDepleted();  // RVA: 0x497F40
        void EnsureFadeOverlay();  // RVA: 0x492270
        IEnumerator* PlayFadeOutInCoroutine(float fadeInDuration, float fadeOutDuration);  // RVA: 0x49BAF0
        void StartVsSplash();  // RVA: 0x49FE30
        IEnumerator* PlayVsAnimation();  // RVA: 0x49C050
        IEnumerator* CombatEndPopupSequence(CombatResult* result);  // RVA: 0x491890
        static bool ShouldShowAnyPopup(CombatResult* result);  // RVA: 0x49F400
        IEnumerator* ShowPopupCoroutine(Il2CppString* headerText, Il2CppString* subtitleText, ItemInstance* dropItem, float duration);  // RVA: 0x49F710
        IEnumerator* WaitForPopupDurationOrSkip(float duration, bool skippable);  // RVA: 0x4A6840
        bool PopupSkipClickedThisFrame();  // RVA: 0x49C0C0
        void ShowPopupCard(ItemInstance* droppedItem);  // RVA: 0x49F460
        static Il2CppString* WrapWave(CombatResult* result, Il2CppString* body);  // RVA: 0x4A68E0
        Il2CppString* BuildSectorClearedText(CombatResult* result);  // RVA: 0x491140
        Il2CppString* BuildArenaActivatedText(CombatResult* result);  // RVA: 0x48FE10
        static Il2CppString* BuildLevelUpText(CombatResult* result);  // RVA: 0x490870
        static Il2CppString* BuildPvPResultText(CombatResult* result);  // RVA: 0x490AC0
        static Il2CppString* BuildPvPRewardSubtitle(CombatResult* result);  // RVA: 0x490E20
        static Il2CppString* BuildArenaWaveClearedText(CombatResult* result);  // RVA: 0x490340
        static Il2CppString* BuildArenaWaveProgressText(CombatResult* result);  // RVA: 0x490650
        static Il2CppString* BuildArenaDefeatText(CombatResult* result);  // RVA: 0x490160
        void SpawnDamagePopup(CombatTurnResult* result);  // RVA: 0x49F7F0
        void HandleHealTick(int32_t healAmount);  // RVA: 0x497C20
        void HandleEnemyHealTick(int32_t healAmount);  // RVA: 0x4977E0
        void RefreshDropsList();  // RVA: 0x49C8D0
        void EnsureDropsGridLayout();  // RVA: 0x491E00
        GameObject* CreateDropLabel(Il2CppString* text, Color color);  // RVA: 0x491BD0
        void TriggerHitAnimation(bool hitPlayer);  // RVA: 0x4A2320
        IEnumerator* FlashEnemyHitRed();  // RVA: 0x493BF0
        IEnumerator* PlayEffectOverlay(Image* effectImage, Sprite[][] effectFrames, float delaySec);  // RVA: 0x49B860
        void PlayParryEffect();  // RVA: 0x49BD40
        void EnsureParryEffectImage();  // RVA: 0x4928F0
        void PlayEnemyParryEffect();  // RVA: 0x49B900
        void EnsureEnemyParryEffectImage();  // RVA: 0x491E80
        IEnumerator* FlashBar(CanvasGroup* bar);  // RVA: 0x493BA0
        ItemData* GetEquippedWeaponData(Il2CppString* slotKey);  // RVA: 0x495330
        ItemData* GetPvPEnemyWeaponData(EnemyState* enemy, Il2CppString* slotKey);  // RVA: 0x495550
        IEnumerator* SpawnProjectileSpread(RectTransform* from, RectTransform* to, int32_t count, ItemData* weaponData, SpriteAnimator* lungeAnimator, float extraSpawnDelay, bool suppressLunge);  // RVA: 0x49FC30
        Canvas* FindWorldCanvas();  // RVA: 0x493A70
        IEnumerator* SpawnProjectileVFX(RectTransform* from, RectTransform* to, float verticalOffset, ItemData* weaponData, bool triggerLungeOnSpawn, SpriteAnimator* lungeAnimator, float extraSpawnDelay);  // RVA: 0x49FD30
        IEnumerator* PlayProjectileImpact(RectTransform* canvasRect, Vector2 position, ItemData* weaponData);  // RVA: 0x49BF30
        void AppendBattleLog(Il2CppString* line);  // RVA: 0x48F560
        SpriteCollection* LoadSlashSottoCollection();  // RVA: 0x49A170
        SpriteCollection* LoadSlashSopraCollection();  // RVA: 0x49A120
        SpriteCollection* LoadSlashAttack3Collection();  // RVA: 0x49A080
        SpriteCollection* LoadSlashRightAboveCollection();  // RVA: 0x49A0D0
        SpriteCollection* LoadMagicAttackCollection();  // RVA: 0x49A030
        bool HasAnyMeleeWeaponEquipped();  // RVA: 0x498140
        bool IsMeleeInSlot(PlayerState* ps, Il2CppString* slotKey);  // RVA: 0x499760
        bool IsRangedInSlot(PlayerState* ps, Il2CppString* slotKey);  // RVA: 0x499D20
        void RefreshPlayerAttackAnimationGate();  // RVA: 0x49D4F0
        static Attack2Mode ResolveAttack2Mode(bool meleeArma1, bool meleeArma2);  // RVA: 0x49DCD0
        bool HasPvPMeleeWeaponEquipped(EnemyState* enemy);  // RVA: 0x498210
        bool IsPvPMeleeInSlot(EnemyState* enemy, Il2CppString* slotKey);  // RVA: 0x499910
        bool IsPvPRangedInSlot(EnemyState* enemy, Il2CppString* slotKey);  // RVA: 0x499B10
        void RefreshPlayerSlashSprites();  // RVA: 0x49D650
        Color GetWeapon1SlashColor();  // RVA: 0x4958C0
        Color GetWeapon2SlashColor();  // RVA: 0x495980
        Color GetElementSlashColor(ElementCategory cat);  // RVA: 0x493D90
        Il2CppString* GetCharacterIdleResourceSuffix();  // RVA: 0x493C60
        static Il2CppString* ResolveCharacterIdleResourceSuffix(CharacterType c);  // RVA: 0x49DDC0
        static Il2CppString* ResolveCharacterAttackPrefix(CharacterType c);  // RVA: 0x49DCF0
        void InitPlayerSprite();  // RVA: 0x498450
        void UpdateEnemySprite(EnemyState* enemy);  // RVA: 0x4A38A0
        void SetupPvPEnemyOverlay(EnemyState* enemy);  // RVA: 0x49E6C0
        void SetupPvPTooltip(EnemyState* enemy);  // RVA: 0x49F1B0
        void ClearPvPTooltip();  // RVA: 0x4917C0
        void SetupPvETooltip(EnemyState* enemy);  // RVA: 0x49E560
        void ClearPvETooltip();  // RVA: 0x4916F0
        float ComputeEnemyAlignedY(Il2CppString* categoryName, float frameSize, float displaySize);  // RVA: 0x491920
        EnemyCategoryData* FindEnemyCategoryData(Il2CppString* categoryName);  // RVA: 0x493710
        Il2CppString* GetEnemySpriteResource(Il2CppString* categoryName);  // RVA: 0x494E90
        Il2CppString* GetEnemyAttackResource(Il2CppString* categoryName);  // RVA: 0x494060
        Il2CppString* GetEnemyHitResource(Il2CppString* categoryName);  // RVA: 0x4949A0
        Il2CppString* GetEnemyDeathResource(Il2CppString* categoryName);  // RVA: 0x494500
        Il2CppString* GetEnemyAttackEffectResource(Il2CppString* categoryName);  // RVA: 0x493E90
        Color GetEnemyNameColor(EnemyColor color);  // RVA: 0x494E40
        void OnRestClicked();  // RVA: 0x49B5B0
        void SetEnemyHpVisible(bool visible);  // RVA: 0x49DF80
        Color GetRarityColor(Il2CppString* rarity);  // RVA: 0x495750
        void SetBarFill(Image* fillImage, float value);  // RVA: 0x49DE90
        void UpdateSectorBackground(int32_t sectorIndex);  // RVA: 0x4A5D20
        void RefreshTitleFrameHeight();  // RVA: 0x49DBC0
        IEnumerator* RefreshTitleFrameHeightCoroutine();  // RVA: 0x49DB50
        void .ctor();  // RVA: 0x4A6F00
        static void .cctor();  // RVA: 0x4A6960
        void <Start>b__127_0();  // RVA: 0x4A32F0
        void <Start>b__127_8();  // RVA: 0x4A33D0
        void <Start>b__127_9();  // RVA: 0x4A34A0
        Il2CppString* <AttachEnemyHpTooltip>b__129_0();  // RVA: 0x4A3190
        void <ToggleSettingsPanel>b__164_0();  // RVA: 0x4A3570
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class ElementVfxMapping
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ElementCategory category; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    GameObject* vfxPrefab; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector2 position; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float displaySize; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Sprite[][] frames; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t repeatCount; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float repeatSpread; // 0x003C

    // Methods
    void .ctor();  // RVA: 0x4AFFF0
};

// Namespace: <global>
class VfxSlot
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    GameObject* vfxPrefab; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Vector2 position; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float displaySize; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Sprite[][] frames; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class ElementPositionEntry
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ElementCategory category; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    Vector2 position; // 0x0014
    uint8_t pad_0015[0x7]; // 0x0015
    bool overridePosition; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float displaySize; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4AFFE0
};

// Namespace: <global>
class PerEnemyVfxOverride
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* enemyCategoryName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool overrideCrit; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    Vector2 critPosition; // 0x001C
    uint8_t pad_001D[0x7]; // 0x001D
    float critDisplaySize; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    bool overrideHeal; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    Vector2 healPosition; // 0x002C
    uint8_t pad_002D[0x7]; // 0x002D
    float healDisplaySize; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    System.Collections.Generic.List<AutoBattle.UI.BattleVfxOverlay.ElementPositionEntry> elementOverrides; // 0x0038

    // Methods
    void .ctor();  // RVA: 0x4B6F30
};

// Namespace: <global>
class <DelayedVfxAt>d__76
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float delay; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    BattleVfxOverlay* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RectTransform* anchor; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Sprite[][] frames; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float size; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float duration; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    Vector2 position; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Vector2 offset; // 0x0050

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4B8E00
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8F00
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <PlayFlipbook>d__81
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Sprite[][] frames; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float duration; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Image* img; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* host; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t <n>5__2; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float <perFrame>5__3; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    int32_t <i>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4B9E60
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BA010
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class BattleVfxOverlay : public MonoBehaviour
    {
    public:
        // Static fields
        // static Il2CppString* PLAYER_TARGET_KEY;
        // static Il2CppString* PVP_CATEGORY_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* canvasRect; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        RawImage* overlayRawImage; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        VfxSlot* critVfx; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        VfxSlot* healVfx; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        VfxSlot* meleeSlashVfx; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<AutoBattle.UI.BattleVfxOverlay.ElementVfxMapping> elementVfxMappings; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.List<AutoBattle.UI.BattleVfxOverlay.PerEnemyVfxOverride> perEnemyOverrides; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float vfxDisplaySize; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float vfxDuration; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float elementalDisplaySize; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float elementalDuration; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        Color slashColorFrost; // 0x0068
        uint8_t pad_0069[0xF]; // 0x0069
        Color slashColorFlame; // 0x0078
        uint8_t pad_0079[0xF]; // 0x0079
        Color slashColorArcane; // 0x0088
        uint8_t pad_0089[0xF]; // 0x0089
        Color slashColorHoly; // 0x0098
        uint8_t pad_0099[0xF]; // 0x0099
        Color slashColorShadow; // 0x00A8
        uint8_t pad_00A9[0xF]; // 0x00A9
        Il2CppString* projectileSpritesResource; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Il2CppString* projectileImpactSpritesResource; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        float projectileTravelTime; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float projectileSize; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float projectileImpactSize; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float projectileImpactDuration; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        float projectileArcHeight; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        int32_t projectileAttack2Count; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        float projectileSpreadOffset; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        float projectileSpreadDelay; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        bool projectileRotateToDirection; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        Color projectileTint; // 0x00EC
        uint8_t pad_00ED[0xF]; // 0x00ED
        Color projectileImpactTint; // 0x00FC
        uint8_t pad_00FD[0x13]; // 0x00FD
        System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,AutoBattle.UI.BattleVfxOverlay.ElementVfxMapping> elementMappingLookup; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        System.Collections.Generic.Dictionary<System.String,AutoBattle.UI.BattleVfxOverlay.PerEnemyVfxOverride> perEnemyOverrideLookup; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        CombatManager* _combatManager; // 0x0120
    
        // Methods
        Color GetSlashTintFor(ElementCategory cat);  // RVA: 0x4AB210
        Il2CppString* get_ProjectileSpritesResource();  // RVA: 0x4AC8F0
        Il2CppString* get_ProjectileImpactSpritesResource();  // RVA: 0x4AC890
        float get_ProjectileTravelTime();  // RVA: 0x4AC910
        float get_ProjectileSize();  // RVA: 0x4AC8C0
        float get_ProjectileImpactSize();  // RVA: 0x4AC880
        float get_ProjectileImpactDuration();  // RVA: 0x4AC870
        float get_ProjectileArcHeight();  // RVA: 0x4AC850
        int32_t get_ProjectileAttack2Count();  // RVA: 0x4AC860
        float get_ProjectileSpreadOffset();  // RVA: 0x4AC8E0
        float get_ProjectileSpreadDelay();  // RVA: 0x4AC8D0
        bool get_ProjectileRotateToDirection();  // RVA: 0x4AC8B0
        Color get_ProjectileTint();  // RVA: 0x4AC900
        Color get_ProjectileImpactTint();  // RVA: 0x4AC8A0
        void Awake();  // RVA: 0x4AA6B0
        void OnEnable();  // RVA: 0x4AB570
        void OnDisable();  // RVA: 0x4AB410
        void HandleCombatEnd(CombatResult* result);  // RVA: 0x4AB280
        void BuildLookup();  // RVA: 0x4AA750
        PerEnemyVfxOverride* GetEnemyOverride(Il2CppString* targetEnemyCategory);  // RVA: 0x4AB000
        Vector2 MirrorPositionForPlayerTargetIfNeeded(Vector2 position, Il2CppString* targetEnemyCategory, bool overrideApplied);  // RVA: 0x4AB320
        void PlayCritAt(RectTransform* anchor, Il2CppString* targetEnemyCategory);  // RVA: 0x4AB6E0
        bool PlayMeleeSlashAt(RectTransform* anchor, Il2CppString* targetEnemyCategory);  // RVA: 0x4ABED0
        void PlayHealAt(RectTransform* anchor, Il2CppString* targetEnemyCategory);  // RVA: 0x4ABC70
        bool PlayElementalAt(RectTransform* anchor, ElementCategory element, Il2CppString* targetEnemyCategory);  // RVA: 0x4AB830
        IEnumerator* DelayedVfxAt(RectTransform* anchor, Sprite[][] frames, float size, float duration, Vector2 position, Vector2 offset, float delay);  // RVA: 0x4AAF00
        void CleanupAllVfx();  // RVA: 0x4AAAD0
        static bool IsVfxObject(Il2CppString* name);  // RVA: 0x4AB290
        RectTransform* GetRootCanvasRect();  // RVA: 0x4AB0A0
        void PlayVfxAt(RectTransform* anchor, Sprite[][] frames, float displaySize, float duration, Vector2 position, Vector2 additionalOffset);  // RVA: 0x4AC030
        IEnumerator* PlayFlipbook(Image* img, GameObject* host, Sprite[][] frames, float duration);  // RVA: 0x4ABBC0
        void .ctor();  // RVA: 0x4AC5E0
    };

    // Namespace: AutoBattle.UI
    class BonusEventPopup : public MonoBehaviour
    {
    public:
        // Static fields
        // static Il2CppString* PrefKey;
        // static BonusEventPopup* _sceneInstance;
        // static bool _sceneLookupAttempted;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* popupRoot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Button* learnMoreButton; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Button* closeButton; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Il2CppString* learnMoreUrl; // 0x0038
    
        // Methods
        static BonusEventPopup* get_SceneInstance();  // RVA: 0x4AD1D0
        static bool get_IsShowing();  // RVA: 0x4AD0F0
        void OnDestroy();  // RVA: 0x4AC9D0
        static void ResetStatics();  // RVA: 0x4ACB00
        static void TryShow();  // RVA: 0x4ACDC0
        void Show();  // RVA: 0x4ACB70
        void OnLearnMore();  // RVA: 0x4ACA90
        void OnClose();  // RVA: 0x4AC9C0
        void DismissForever();  // RVA: 0x4AC920
        void .ctor();  // RVA: 0x4AD0A0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <ShowBonusEventWhenStartupClear>d__13
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BB480
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BB630
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <ShowDemoSaveNoticeNextFrame>d__12
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BB670
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BB6D0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class CreationScreenUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_InputField* nameInput; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Dropdown* genderDropdown; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Button* startButton; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t maxNameLength; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Image* avatarPreview; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite* character1IdleSprite; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Sprite* character2IdleSprite; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite* character3IdleSprite; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Sprite* character4IdleSprite; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Sprite* character5IdleSprite; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite* character6IdleSprite; // 0x0070
    
        // Methods
        void OnEnable();  // RVA: 0x4AD3B0
        IEnumerator* ShowDemoSaveNoticeNextFrame();  // RVA: 0x4ADC20
        IEnumerator* ShowBonusEventWhenStartupClear();  // RVA: 0x4ADBD0
        void Start();  // RVA: 0x4ADC70
        void UpdateAvatarPreview(int32_t index);  // RVA: 0x4AE070
        void OnStartButtonClicked();  // RVA: 0x4AD6D0
        static void ResizeDropdownTemplateToFitOptions(TMP_Dropdown* dropdown);  // RVA: 0x4AD870
        void .ctor();  // RVA: 0x4AE150
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <AnimatePopup>d__27
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameObject* popupGO; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RectTransform* rt; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    TMP_Text* text; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    DamagePopup* <>4__this; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Vector2 <startPos>5__2; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Vector2 <endPos>5__3; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Color <startColor>5__4; // 0x0050
    uint8_t pad_0051[0xF]; // 0x0051
    Outline* <outline>5__5; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Color <outlineStartColor>5__6; // 0x0068
    uint8_t pad_0069[0xF]; // 0x0069
    float <wigglePhase>5__7; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float <elapsed>5__8; // 0x007C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4B6FC0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B74A0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class DamagePopup : public MonoBehaviour
    {
    public:
        // Static fields
        // static Color COLOR_NORMAL;
        // static float POPUP_LIFETIME;
        // static float FLOAT_DISTANCE;
        // static float FONT_SIZE_NORMAL;
        // static float FONT_SIZE_CRIT;
        // static float FONT_SIZE_PARRY;
        // static Il2CppString* TEMPLATE_KEY_BASE;
        // static Il2CppString* TEMPLATE_KEY_CRIT;
        // static Il2CppString* TEMPLATE_KEY_PARRY;
        // static Il2CppString* TEMPLATE_KEY_HEAL;
        // static Color COLOR_CRIT;
        // static Color COLOR_PARRY;
        // static Color COLOR_HEAL;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Transform* popupContainer; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float damageReference; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float fontSizeMaxMultiplier; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        Color colorDamageLow; // 0x0030
        uint8_t pad_0031[0xF]; // 0x0031
        Color colorDamageMid; // 0x0040
        uint8_t pad_0041[0xF]; // 0x0041
        Color colorDamageHigh; // 0x0050
        uint8_t pad_0051[0xF]; // 0x0051
        float wiggleAmplitude; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float wiggleFrequency; // 0x0064
    
        // Methods
        void SetContainer(Transform* container);  // RVA: 0x4AE850
        void ShowDamage(RectTransform* anchor, int32_t damage, bool isCrit, bool isParry);  // RVA: 0x4AE860
        void ShowHeal(RectTransform* anchor, int32_t healAmount);  // RVA: 0x4AEC10
        GameObject* SpawnPopup(RectTransform* anchor, Il2CppString* templateKey);  // RVA: 0x4AEE90
        GameObject* BuildDefaultPopup();  // RVA: 0x4AE220
        void ClearAllPopups();  // RVA: 0x4AE400
        IEnumerator* AnimatePopup(GameObject* popupGO, RectTransform* rt, TMP_Text* text);  // RVA: 0x4AE160
        float GetDynamicFontSize(float baseSize, int32_t damage);  // RVA: 0x4AE7E0
        Color GetDynamicDamageColor(int32_t damage);  // RVA: 0x4AE6D0
        void .ctor();  // RVA: 0x4AF370
        static void .cctor();  // RVA: 0x4AF2E0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass17_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* url; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <WireUrlButton>b__0();  // RVA: 0x4BD3B0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class DemoSaveNoticePopup : public MonoBehaviour
    {
    public:
        // Static fields
        // static DemoSaveNoticePopup* _sceneInstance;
        // static bool _sceneLookupAttempted;
        // static bool _shownThisLaunch;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* popupRoot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Button* gotItButton; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Button* discordButton; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Il2CppString* discordUrl; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Button* wlButton; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Il2CppString* wlUrl; // 0x0048
    
        // Methods
        static DemoSaveNoticePopup* get_SceneInstance();  // RVA: 0x4AFD00
        static bool get_IsShowing();  // RVA: 0x4AFC20
        void OnDestroy();  // RVA: 0x4AF440
        static void ResetStatics();  // RVA: 0x4AF500
        static void TryShow();  // RVA: 0x4AF750
        void Show();  // RVA: 0x4AF580
        static void WireUrlButton(Button* btn, Il2CppString* url, Il2CppString* label);  // RVA: 0x4AFA10
        void Dismiss();  // RVA: 0x4AF3C0
        void .ctor();  // RVA: 0x4AFBA0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <ForceHeightNextFrame>d__2
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    DropdownHeightFixer* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4B92F0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B93F0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class DropdownHeightFixer : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float fixedHeight; // 0x0020
    
        // Methods
        void OnEnable();  // RVA: 0x4AFF50
        IEnumerator* ForceHeightNextFrame();  // RVA: 0x4AFEE0
        void .ctor();  // RVA: 0x4AFFD0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass100_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetItemTemplateForSlot>b__0(ItemData* t);  // RVA: 0x4BD430
};

// Namespace: <global>
class <>c__DisplayClass101_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetDefaultWeaponSpriteForSlot>b__0(ItemData* t);  // RVA: 0x4BD430
};

// Namespace: <global>
class <>c__DisplayClass107_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetOverlaySpriteForSlot>b__0(ItemData* t);  // RVA: 0x4BD430
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class EquipOverlayController : public MonoBehaviour
    {
    public:
        // Static fields
        // static Vector2 FemaleHeadDelta;
        // static Vector2 FemaleBodyDelta;
        // static Vector2 FemaleWeapon2Delta;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Image* headOverlayImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* bodyOverlayImage; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Image* weaponOverlayImage; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* weapon2OverlayImage; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Image* weapon2HandOverlayImage; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Vector2 headSize; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Vector2 bodySize; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Vector2 weaponSize; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Vector2 weapon2Size; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Vector2 weapon2HandSize; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Vector2 weapon2HandOffset; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        bool weapon2HandEnabled; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float pixelScale; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        EquipAnchorData* anchorData; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        EquipAnchorData* maleAnchorData; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        EquipAnchorData* femaleAnchorData; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Vector2 weapon2BaseOffset; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        float anchorRefPixelScale; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        Vector2 refPlayerAnchoredPos; // 0x00A4
        uint8_t pad_00A5[0xB]; // 0x00A5
        Sprite* defaultHeadSprite; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Sprite* defaultBodySprite; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Sprite* defaultSwordSprite; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Sprite* defaultAxeSprite; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Sprite* defaultShieldSprite; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Sprite* defaultSpearSprite; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Sprite* defaultHandSprite; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Sprite* defaultHandSpriteBlack; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        bool isCharacter4; // 0x00F0
        bool spritesLoaded; // 0x00F1
        bool currentIsAttacking; // 0x00F2
        uint8_t pad_00F3[0x1]; // 0x00F3
        int32_t currentFrame; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        int32_t currentAttackVariant; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        bool weaponVisible; // 0x00FC
        bool weapon2Visible; // 0x00FD
        uint8_t pad_00FE[0x2]; // 0x00FE
        Sprite[][] weapon1AnimFrames; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        float weapon1AnimFps; // 0x0108
        uint8_t pad_0109[0x3]; // 0x0109
        float weapon1AnimTimer; // 0x010C
        uint8_t pad_010D[0x3]; // 0x010D
        int32_t weapon1AnimIndex; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        Sprite[][] weapon2AnimFrames; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        float weapon2AnimFps; // 0x0120
        uint8_t pad_0121[0x3]; // 0x0121
        float weapon2AnimTimer; // 0x0124
        uint8_t pad_0125[0x3]; // 0x0125
        int32_t weapon2AnimIndex; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        Sprite[][] headAnimFrames; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        float headAnimFps; // 0x0138
        uint8_t pad_0139[0x3]; // 0x0139
        float headAnimTimer; // 0x013C
        uint8_t pad_013D[0x3]; // 0x013D
        int32_t headAnimIndex; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        Sprite[][] attackOverlayFrames1; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        float attackOverlayFps1; // 0x0150
        uint8_t pad_0151[0x3]; // 0x0151
        float attackOverlayTimer1; // 0x0154
        uint8_t pad_0155[0x3]; // 0x0155
        int32_t attackOverlayIndex1; // 0x0158
        uint8_t pad_0159[0x3]; // 0x0159
        bool attackOverlayPlaying1; // 0x015C
        uint8_t pad_015D[0x3]; // 0x015D
        AttackOverlayMode attackOverlayMode1; // 0x0160
        uint8_t pad_0161[0x7]; // 0x0161
        Sprite* attackOverlayRestoreSprite1; // 0x0168
        uint8_t pad_0169[0x7]; // 0x0169
        Vector2 attackOverlayRestoreSize1; // 0x0170
        uint8_t pad_0171[0x7]; // 0x0171
        Sprite[][] attackOverlayFrames2; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        float attackOverlayFps2; // 0x0180
        uint8_t pad_0181[0x3]; // 0x0181
        float attackOverlayTimer2; // 0x0184
        uint8_t pad_0185[0x3]; // 0x0185
        int32_t attackOverlayIndex2; // 0x0188
        uint8_t pad_0189[0x3]; // 0x0189
        bool attackOverlayPlaying2; // 0x018C
        uint8_t pad_018D[0x3]; // 0x018D
        AttackOverlayMode attackOverlayMode2; // 0x0190
        uint8_t pad_0191[0x7]; // 0x0191
        Sprite* attackOverlayRestoreSprite2; // 0x0198
        uint8_t pad_0199[0x7]; // 0x0199
        Vector2 attackOverlayRestoreSize2; // 0x01A0
        uint8_t pad_01A1[0x7]; // 0x01A1
        Image* weapon1AttackOverlayImage; // 0x01A8
        uint8_t pad_01A9[0x7]; // 0x01A9
        Image* weapon2AttackOverlayImage; // 0x01B0
        uint8_t pad_01B1[0x7]; // 0x01B1
        bool useFixedPositions; // 0x01B8
        uint8_t pad_01B9[0x3]; // 0x01B9
        Vector2 fixedHeadPos; // 0x01BC
        uint8_t pad_01BD[0x7]; // 0x01BD
        Vector2 fixedBodyPos; // 0x01C4
        uint8_t pad_01C5[0x7]; // 0x01C5
        Vector2 fixedWeaponPos; // 0x01CC
        uint8_t pad_01CD[0x7]; // 0x01CD
        Vector2 fixedWeapon2Pos; // 0x01D4
        uint8_t pad_01D5[0x7]; // 0x01D5
        bool isFemaleCharacter; // 0x01DC
        bool mirrorX; // 0x01DD
        uint8_t pad_01DE[0x2]; // 0x01DE
        Vector2 mirrorHostIdlePos; // 0x01E0
        uint8_t pad_01E1[0x7]; // 0x01E1
        bool hasMirrorHostIdlePos; // 0x01E8
        bool pvpModeActive; // 0x01E9
        bool pvpWeapon2IsShield; // 0x01EA
        uint8_t pad_01EB[0x5]; // 0x01EB
        System.Collections.Generic.Dictionary<System.String,AutoBattle.Steam.EquippedItemInfo> pvpItemBySlot; // 0x01F0
    
        // Methods
        RectTransform* get_Weapon1OverlayRect();  // RVA: 0x4B6D20
        RectTransform* get_Weapon2OverlayRect();  // RVA: 0x4B6DD0
        float GetEffectiveAnchorRefPixelScale();  // RVA: 0x4B1C10
        void Awake();  // RVA: 0x4B0120
        void Update();  // RVA: 0x4B64D0
        void PlayWeaponAttackAnim(Il2CppString* slotKey);  // RVA: 0x4B3200
        void LoadResources();  // RVA: 0x4B27C0
        void EnsureOverlayImages();  // RVA: 0x4B0EF0
        Image* CreateAttackOverlayChild(Il2CppString* objName, Transform* parent);  // RVA: 0x4B0710
        Image* CreateHandChild(Transform* parent, Il2CppString* objName, Vector2 size, Vector2 localOffset);  // RVA: 0x4B0930
        Image* CreateOverlaySibling(Il2CppString* objName, Vector2 size, bool behind);  // RVA: 0x4B0CB0
        Image* CreateOverlayChild(Il2CppString* objName, Vector2 size);  // RVA: 0x4B0AF0
        void Configure(Vector2 headSz, Vector2 bodySz, Vector2 weaponSz, float pxScale, Vector2 weapon2Sz);  // RVA: 0x4B03C0
        void RefreshOverlays();  // RVA: 0x4B4040
        void UpdateHandOverlayVisibility();  // RVA: 0x4B5690
        bool IsWeapon2Shield();  // RVA: 0x4B25F0
        void SetHandOverlayEnabled(bool enabled);  // RVA: 0x4B5220
        void ConfigureHandOverlay(Vector2 size, Vector2 localOffset);  // RVA: 0x4B02D0
        void RefreshWeaponSlotOverlay(Image* overlayImage, System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey, bool visible);  // RVA: 0x4B45A0
        ItemData* GetItemTemplateForSlot(System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey);  // RVA: 0x4B1CB0
        Sprite* GetDefaultWeaponSpriteForSlot(System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey);  // RVA: 0x4B14A0
        void OnAnimationFrameChanged(bool isAttacking, int32_t frameIndex, int32_t attackVariant);  // RVA: 0x4B2E60
        void SetWeaponVisible(bool visible);  // RVA: 0x4B5550
        void SetWeapon2Visible(bool visible);  // RVA: 0x4B5410
        void UpdateOverlayPositions();  // RVA: 0x4B5800
        void RefreshSlotOverlay(Image* overlayImage, Sprite* defaultSprite, System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey);  // RVA: 0x4B42F0
        Sprite* GetOverlaySpriteForSlot(System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey);  // RVA: 0x4B1E10
        bool IsSlotOccupied(System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, Il2CppString* slotKey);  // RVA: 0x4B2430
        void RefreshFromPvPItems(System.Collections.Generic.List<AutoBattle.Steam.EquippedItemInfo> pvpItems);  // RVA: 0x4B38C0
        void ApplyPvPSlotSprite(Image* overlayImage, EquippedItemInfo* info, Sprite* fallbackDefault, bool weaponVisibleGate, bool useWeapon2Gate);  // RVA: 0x4B0010
        Sprite* ResolvePvPItemSprite(EquippedItemInfo* info, Sprite* fallbackDefault);  // RVA: 0x4B48F0
        Sprite* PickWeaponDefault(EquippedItemInfo* info);  // RVA: 0x4B2E80
        static bool IsShieldName(Il2CppString* itemName);  // RVA: 0x4B2300
        static bool IsSpearName(Il2CppString* itemName);  // RVA: 0x4B24C0
        static bool IsAxeName(Il2CppString* itemName);  // RVA: 0x4B21F0
        void HideAllOverlays();  // RVA: 0x4B2070
        void SetFixedPositions(Vector2 headPos, Vector2 weaponPos, bool flipWeapon, Vector2 bodyPos, Vector2 weapon2Pos);  // RVA: 0x4B4DB0
        void ClearFixedPositions();  // RVA: 0x4B0130
        void SetMirrorX(bool mirror);  // RVA: 0x4B5250
        void SetCharacterType(CharacterType characterType);  // RVA: 0x4B4BC0
        void SetFemaleMode(bool female);  // RVA: 0x4B4CB0
        void SetOffsets(Vector2 head, Vector2 weapon);  // RVA: 0x4B53F0
        void SetSizes(Vector2 head, Vector2 weapon);  // RVA: 0x4B5400
        Sprite* GetWeapon1Sprite();  // RVA: 0x4B1FE0
        void .ctor();  // RVA: 0x4B6C40
        static void .cctor();  // RVA: 0x4B6BC0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct CrossSynergyEntryData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* slotName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* itemName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ElementCategory itemCategory; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bonusText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* context; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ElementCategory targetCategory; // 0x0038
};

// Namespace: <global>
class <>c__DisplayClass33_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* slotKey; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    EquipScreenUI* <>4__this; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <Start>b__1();  // RVA: 0x4D41F0
};

// Namespace: <global>
class <>c__DisplayClass41_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* equippedItem; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <RefreshSlot>b__0(ItemData* id);  // RVA: 0x4BD430
};

// Namespace: <global>
class <>c__DisplayClass46_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* inst; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <DetectActiveCrossSynergies>b__0(ItemInstance* it);  // RVA: 0x4D44B0
    bool <DetectActiveCrossSynergies>b__1(ItemData* it);  // RVA: 0x4D44D0
};

// Namespace: <global>
class <>c__DisplayClass46_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* inst; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <DetectActiveCrossSynergies>b__2(ItemInstance* it);  // RVA: 0x4D44B0
    bool <DetectActiveCrossSynergies>b__3(ItemData* it);  // RVA: 0x4D44D0
};

// Namespace: <global>
class <>c__DisplayClass48_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* equippedItem; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    EquipScreenUI* <>4__this; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <UpdateSlotDisplay>b__0(ItemData* id);  // RVA: 0x4BD430
};

// Namespace: <global>
class <>c__DisplayClass48_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* slot; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    <>c__DisplayClass48_0* CS$<>8__locals1; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <UpdateSlotDisplay>b__1();  // RVA: 0x4D4500
};

// Namespace: <global>
class <>c__DisplayClass58_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <PopulateSlotPanelItems>b__0(ItemData* id);  // RVA: 0x4BD430
    bool <PopulateSlotPanelItems>b__1(ItemData* id);  // RVA: 0x4D42E0
};

// Namespace: <global>
class <>c__DisplayClass61_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    EquipScreenUI* <>4__this; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* slot; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <CreateItemCard>b__0(ItemData* id);  // RVA: 0x4BD430
    bool <CreateItemCard>b__1(ItemData* id);  // RVA: 0x4D42E0
    void <CreateItemCard>b__2(ItemInstance* _);  // RVA: 0x4D4560
};

// Namespace: <global>
class <>c__DisplayClass61_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool equippedHereAtBuild; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* itemCopy; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemCardUI* cardRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass61_0* CS$<>8__locals1; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CreateItemCard>b__3();  // RVA: 0x4D46C0
};

// Namespace: <global>
class <>c__DisplayClass88_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instance; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetSynergyBonusDescriptions>b__0(ItemInstance* it);  // RVA: 0x4D44B0
    bool <GetSynergyBonusDescriptions>b__1(ItemData* it);  // RVA: 0x4D44D0
};

// Namespace: <global>
class <RefreshEquipTextsNextFrame>d__36
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    EquipScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4D4030
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4D41B0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class EquipScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static String[][] SlotKeys;
        // static Vector2[][] SlotPositions;
        // static String[][] StatLabelNames;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject[][] slotObjects; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text[][] statLabels; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Toggle* statsAllocationToggle; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        StatsAllocationUI* statsAllocationUI; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        GameObject* statsAllocationNewBadge; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* statsOverlay; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        GameObject* itemPanelRoot; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Transform* itemPanelContent; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        ScrollRect* itemPanelScroll; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        GameObject* slotButtonPrefab; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        GameObject* itemCardPrefab; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Button* backButton; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Button* inventoryButton; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        TMP_Text* panelTitle; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Button* closeButton; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Button* unequipButton; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        TMP_Dropdown* rarityFilterDropdown; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        TMP_Dropdown* elementFilterDropdown; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        float dropdownTemplatePadding; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        System.Nullable<AutoBattle.Data.Rarity> currentRarityFilter; // 0x00B4
        uint8_t pad_00B5[0x7]; // 0x00B5
        System.Nullable<AutoBattle.Data.ElementCategory> currentElementFilter; // 0x00BC
        uint8_t pad_00BD[0x7]; // 0x00BD
        bool filtersWired; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        Transform* synergyParent; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        GameObject* synergyIconPrefab; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Image* equipPlayerSpriteImage; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        SpriteAnimator* equipPlayerAnimator; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        EquipOverlayController* equipOverlay; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Il2CppString* selectedSlot; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        ItemCardUI* currentSelectedCard; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        SlotButtonUI* currentSelectedSlot; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,System.Int32> cachedSynergies; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        System.Collections.Generic.HashSet<System.String> cachedSlotsWithCrossSynergy; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        System.Collections.Generic.List<AutoBattle.UI.EquipScreenUI.CrossSynergyEntryData> cachedCrossSynergyEntries; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        int32_t statsOverlayAcknowledgedPoints; // 0x0120
        uint8_t pad_0121[0x3]; // 0x0121
        int32_t previewHpPts; // 0x0124
        uint8_t pad_0125[0x3]; // 0x0125
        int32_t previewAtkPts; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        int32_t previewDefPts; // 0x012C
        uint8_t pad_012D[0x3]; // 0x012D
        int32_t previewCritPts; // 0x0130
        uint8_t pad_0131[0x3]; // 0x0131
        int32_t previewParryPts; // 0x0134
        uint8_t pad_0135[0x3]; // 0x0135
        bool parryTooltipAttached; // 0x0138
        bool critTooltipAttached; // 0x0139
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x4C6DE0
        static Il2CppString* GetSlotDisplayName(Il2CppString* slotKey);  // RVA: 0x4C2210
        bool HasNewItemForSlot(Il2CppString* slotName);  // RVA: 0x4C2FD0
        void Start();  // RVA: 0x4C6810
        void OnEnable();  // RVA: 0x4C3C80
        void HandleLanguageChanged();  // RVA: 0x4C2F50
        IEnumerator* RefreshEquipTextsNextFrame();  // RVA: 0x4C5510
        void OnDisable();  // RVA: 0x4C3A20
        void RefreshEquip();  // RVA: 0x4C5580
        void RefreshSlot(GameObject* slotObj, Il2CppString* slotName);  // RVA: 0x4C57F0
        void DetectActiveCrossSynergies();  // RVA: 0x4BF400
        static ElementCategory ParseElementName(Il2CppString* name);  // RVA: 0x4C46F0
        void UpdateSlotDisplay(GameObject* slotObj, Il2CppString* slotName);  // RVA: 0x4C7060
        Il2CppString* GetCategoryIcon(ElementCategory cat);  // RVA: 0x4C1E30
        static Il2CppString* ResolveCharacterIdleResourceSuffix(CharacterType c);  // RVA: 0x4C63C0
        void InitEquipPlayerSprite();  // RVA: 0x4C3300
        void OnSlotClicked(Il2CppString* slotName);  // RVA: 0x4C3F80
        void OpenSlotPanel(Il2CppString* slot);  // RVA: 0x4C44A0
        void ApplyFilterDropdownLocalization();  // RVA: 0x4BD940
        void EnsureFilterDropdownsWired();  // RVA: 0x4C1450
        void ResizeDropdownTemplateToFitOptions(TMP_Dropdown* dropdown);  // RVA: 0x4C5CE0
        void EnsureDropdownScrollbar(TMP_Dropdown* dropdown);  // RVA: 0x4C0D10
        void PopulateSlotPanelItems();  // RVA: 0x4C4810
        void PositionItemPanelOutside();  // RVA: 0x4C5090
        void SetItemPanelActive(bool active);  // RVA: 0x4C6490
        void CreateItemCard(ItemInstance* itemInstance, Il2CppString* slot);  // RVA: 0x4BEEA0
        void RefreshAllSlotMarkers();  // RVA: 0x4C53B0
        void OnItemSelected(ItemInstance* itemInstance, Il2CppString* slot, ItemCardUI* cardUI);  // RVA: 0x4C3E90
        void ClosePanel();  // RVA: 0x4BE650
        void EnsureStatLabels();  // RVA: 0x4C1A70
        void UpdateStatDisplay();  // RVA: 0x4C7560
        static Il2CppString* WrapPreview(Il2CppString* value, bool active);  // RVA: 0x4C8B40
        void SetStatLabel(int32_t index, Il2CppString* label, Il2CppString* value);  // RVA: 0x4C6520
        void OnStatsAllocationToggled(bool isOn);  // RVA: 0x4C41A0
        void RefreshStatsAllocationDot();  // RVA: 0x4C5B60
        void ApplyAllocationPreview(int32_t hpPts, int32_t atkPts, int32_t defPts, int32_t critPts, int32_t parryPts);  // RVA: 0x4BD910
        void EnsureCritTooltip();  // RVA: 0x4C0B50
        void EnsureParryTooltip();  // RVA: 0x4C18B0
        void UpdateSynergyDisplay();  // RVA: 0x4C8120
        void BuildCrossSynergyEntries();  // RVA: 0x4BE1C0
        void CreateCrossSynergyEntry(CrossSynergyEntryData entry, int32_t idx);  // RVA: 0x4BE760
        static Il2CppString* GetItemCategoryHex(ElementCategory cat);  // RVA: 0x4C2070
        void UpdateSynergyRow(Transform* row, Il2CppString* element, int32_t count);  // RVA: 0x4C8560
        Il2CppString* GetSynergyBonusDescriptions(Il2CppString* element, int32_t count);  // RVA: 0x4C2510
        Il2CppString* GetRarityHexColor(Rarity rarity);  // RVA: 0x4C2140
        Color GetElementColor(Il2CppString* element);  // RVA: 0x4C1F00
        EquipSlot SlotNameToEnum(Il2CppString* slotName);  // RVA: 0x4C6680
        void OnUnequipClicked();  // RVA: 0x4C4390
        void OnBackClicked();  // RVA: 0x4C39C0
        void OnInventoryClicked();  // RVA: 0x4C3E30
        void .ctor();  // RVA: 0x4C8F90
        static void .cctor();  // RVA: 0x4C8BB0
        void <Start>b__33_0();  // RVA: 0x4C7050
        void <EnsureFilterDropdownsWired>b__55_0(int32_t idx);  // RVA: 0x4C6E40
        void <EnsureFilterDropdownsWired>b__55_1(int32_t idx);  // RVA: 0x4C6EF0
    };

    // Namespace: AutoBattle.UI
    class EquipSlotTooltip : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* slotDisplayName; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* itemLine; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* runtimePanel; // 0x0030
    
        // Methods
        void Setup(Il2CppString* displayName, Il2CppString* itemInfo);  // RVA: 0x4CA710
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4CA540
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4CA530
        void OnDisable();  // RVA: 0x4CA530
        void Hide();  // RVA: 0x4CA430
        GameObject* CreateRuntimePanel(Il2CppString* text);  // RVA: 0x4C9B10
        void .ctor();  // RVA: 0x4CA750
    };

    // Namespace: AutoBattle.UI
    class EquipSlotTooltipPanel : public MonoBehaviour
    {
    public:
        // Static fields
        // static EquipSlotTooltipPanel* _instance;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* panelRect; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text* tooltipText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* slotNameBG; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* slotNameText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float padding; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float gap; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float maxWidth; // 0x0048
    
        // Methods
        static EquipSlotTooltipPanel* get_Instance();  // RVA: 0x4C9950
        void Awake();  // RVA: 0x4C90F0
        void OnDestroy();  // RVA: 0x4C9330
        void Show(Il2CppString* text, RectTransform* anchorRect);  // RVA: 0x4C93E0
        void Show(Il2CppString* header, Il2CppString* text, RectTransform* anchorRect);  // RVA: 0x4C9400
        void Hide();  // RVA: 0x4A8220
        static Canvas* GetRootCanvas(Component* c);  // RVA: 0x4C91D0
        void .ctor();  // RVA: 0x4C9930
    };

    // Namespace: AutoBattle.UI
    class ForestBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* backgroundSprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* alberiSpritea; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* nebbiaSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite[][] birdFrames; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float pixelScale; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool applyPixelScaleToBackground; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float birdFrameRate; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float birdFlySpeed; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float birdBobAmplitude; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float birdBobPeriod; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float birdBaseY; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float birdRespawnMin; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float birdRespawnMax; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float birdYJitter; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float fogScrollSpeed; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        Color fogTint; // 0x006C
        uint8_t pad_006D[0xF]; // 0x006D
        float fogYOffset; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        RectTransform* bgLayer; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        RectTransform* birdLayer; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        RectTransform* alberiLayer; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        RectTransform* fogContainerRT; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        RectTransform* fogART; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        RectTransform* fogBRT; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        RectTransform* rect; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Image* birdImage; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        int32_t birdFrame; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        float birdTimer; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        float birdX; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float birdCurrentBaseY; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float birdPhase; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float birdRespawnTimer; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        bool birdActive; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        float birdHalfWidth; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        float fogTileWidth; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        bool built; // 0x00E4
    
        // Methods
        void Awake();  // RVA: 0x4CA7C0
        void OnEnable();  // RVA: 0x4CB580
        void Build();  // RVA: 0x4CA820
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, bool raycast);  // RVA: 0x4CB3A0
        RectTransform* CreateFogTile(Il2CppString* name, Transform* parent, Vector2 size, float xOffset);  // RVA: 0x4CB220
        void Update();  // RVA: 0x4CB7E0
        void SetSprites(Sprite* bg, Sprite* alberi, Sprite* nebbia, Sprite[][] bird);  // RVA: 0x4CB770
        void .ctor();  // RVA: 0x4CBEA0
    };

    // Namespace: AutoBattle.UI
    class ForgeRowHover : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* targetImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool interactive; // 0x0028
    
        // Methods
        void SetTargetImage(Image* image);  // RVA: 0x4CC120
        void SetInteractive(bool value);  // RVA: 0x4CC090
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4CBF80
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4CC010
        void OnDisable();  // RVA: 0x4CBF00
        void .ctor();  // RVA: 0x4CC1B0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass36_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ForgeScreenUI* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Rarity srcCopy; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    Rarity tgtCopy; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t neededCopy; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <WireForgeRow>b__0();  // RVA: 0x4D4220
};

// Namespace: <global>
class <>c__DisplayClass37_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* featureName; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <EnsureDemoLockOverlay>b__0();  // RVA: 0x4D4260
};

// Namespace: <global>
class <>c__DisplayClass40_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <PopulateForgeItems>b__0(ItemData* id);  // RVA: 0x4BD430
    bool <PopulateForgeItems>b__1(ItemData* id);  // RVA: 0x4D42E0
};

// Namespace: <global>
class <>c__DisplayClass41_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ForgeScreenUI* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instanceCopy; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameObject* cardRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t neededCopy; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CreateForgeItemCard>b__0();  // RVA: 0x4D4310
};

// Namespace: <global>
class <>c__DisplayClass49_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* newItem; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <ShowForgeResultPopup>b__0(ItemData* id);  // RVA: 0x4BD430
    bool <ShowForgeResultPopup>b__1(ItemData* id);  // RVA: 0x4D42E0
};

// Namespace: <global>
class <AutoHideForgeResultPopup>d__52
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float delay; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ForgeScreenUI* <>4__this; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4D3C70
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4D3D30
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <PlayForgeAnimImage>d__54
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ForgeScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4D3D70
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4D3F40
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <PositionActionPanelDeferred>d__32
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ForgeScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4D3F80
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4D3FF0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class ForgeScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static ValueTuple`4[][] forgeOptions;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* actionPanel; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* cover; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* coverSecondary; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* forgeRarityPanel; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Transform* forgeScrollContent; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* itemCardPrefab; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        TMP_Dropdown* slotDropdown; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        TMP_Dropdown* elementDropdown; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        TMP_Text* counterText; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Button* backButton; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Toggle* selAllToggle; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        GameObject* selAllRedDotOn; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Button* forgeExecuteButton; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameObject* forgeResultPopupRoot; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Image* forgeAnimImage; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Sprite[][] forgeAnimFrames; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        float forgeAnimFps; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        SidePanelController* sidePanel; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        bool isOpen; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        Rarity forgeSourceRarity; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        Rarity forgeTargetRarity; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        int32_t forgeNeededCount; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        Il2CppString* currentSlotFilter; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Il2CppString* currentElementFilter; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> forgeSelectedItems; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        System.Collections.Generic.Dictionary<AutoBattle.Data.ItemInstance,UnityEngine.GameObject> forgeCardMap; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        GameObject* forgeResultPopup; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Coroutine* forgeResultPopupRoutine; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Coroutine* forgeAnimCoroutine; // 0x00F0
    
        // Methods
        bool get_IsOpen();  // RVA: 0x4D27D0
        void Awake();  // RVA: 0x4CCA70
        void Open();  // RVA: 0x4CF7C0
        void Close();  // RVA: 0x4CCC50
        IEnumerator* PositionActionPanelDeferred();  // RVA: 0x4D0110
        void PositionActionPanel();  // RVA: 0x4D0180
        void PositionCover();  // RVA: 0x4B53F0
        void ShowForgeRarityPanel();  // RVA: 0x4D05A0
        void WireForgeRow(GameObject* rowGO, Rarity sourceRarity, Rarity targetRarity, Il2CppString* label, int32_t needed);  // RVA: 0x4D1D00
        void EnsureDemoLockOverlay(GameObject* target, bool show, Il2CppString* analyticsFeatureName);  // RVA: 0x4CD360
        void EnsureLockOverlay(GameObject* target, bool show);  // RVA: 0x4CDB10
        void OnForgeRaritySelected(Rarity sourceRarity, Rarity targetRarity, int32_t needed);  // RVA: 0x4CF130
        void PopulateForgeItems();  // RVA: 0x4CFC60
        void CreateForgeItemCard(ItemData* itemData, ItemInstance* itemInstance);  // RVA: 0x4CD000
        void ToggleForgeItemSelection(ItemInstance* item, GameObject* cardObj, int32_t needed);  // RVA: 0x4D1480
        void OnBackClicked();  // RVA: 0x4CE930
        void OnSelAllToggled(bool isOn);  // RVA: 0x4CF350
        void OnForgeExecute();  // RVA: 0x4CEBB0
        void ShowForgeResultPopup(ItemInstance* newItem);  // RVA: 0x4D0AE0
        static void HideClickToDismissHint(GameObject* popup);  // RVA: 0x4CE490
        void AutoSizePopup();  // RVA: 0x4CC760
        IEnumerator* AutoHideForgeResultPopup(float delay);  // RVA: 0x4CC6E0
        void HideForgeResultPopup();  // RVA: 0x4CE660
        IEnumerator* PlayForgeAnimImage();  // RVA: 0x4CFBF0
        void SetCoversActive(bool active);  // RVA: 0x4D04D0
        Color GetRarityTextColor(Rarity rarity);  // RVA: 0x4CE410
        void WireFilterDropdowns();  // RVA: 0x4D1AC0
        void ApplyForgeFilterLocalization();  // RVA: 0x4CC1C0
        void OnFilterChanged();  // RVA: 0x4CEB90
        void ResetFilters();  // RVA: 0x4D03C0
        static bool MatchesSlotFilter(EquipSlot slot, Il2CppString* filter);  // RVA: 0x4CE7D0
        void UpdateCounter();  // RVA: 0x4D1850
        void UpdateForgeExecuteButton();  // RVA: 0x4D1A20
        void ClearForgeItems();  // RVA: 0x4CCBE0
        void ClearForgeCards();  // RVA: 0x4CCAC0
        static int32_t CountUnequippedByRarity(Rarity rarity);  // RVA: 0x4CCE60
        static Transform* FindChildByName(Transform* root, Il2CppString* childName);  // RVA: 0x4CE1E0
        static TMP_Text* FindChildTMP(Transform* root, Il2CppString* childName);  // RVA: 0x4CE340
        void Toggle();  // RVA: 0x4D1620
        void .ctor();  // RVA: 0x4D26A0
        static void .cctor();  // RVA: 0x4D2430
        void <WireFilterDropdowns>b__57_0(int32_t idx);  // RVA: 0x4D1640
        void <WireFilterDropdowns>b__57_1(int32_t idx);  // RVA: 0x4D1760
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <RepositionAfterMonitorSwitch>d__23
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameFrameDragger* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PointerEventData* eventData; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Vector2 direction; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Vector2 <pointerScreen>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Camera* <pressCam>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t <i>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4ED570
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4ED9E0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class GameFrameDragger : public MonoBehaviour
    {
    public:
        // Static fields
        // static float SWITCH_COOLDOWN_SECONDS;
        // static int32_t TRANSITION_FRAMES;
        // static float EDGE_PUSH_THRESHOLD;
        // static float CORNER_SNAP_THRESHOLD;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* frameRoot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool rightButtonOnly; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        RectTransform* canvasRect; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Vector2 pointerStartLocal; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Vector2 frameStartAnchored; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        bool dragging; // 0x0048
        bool switchedThisDrag; // 0x0049
        uint8_t pad_004A[0x2]; // 0x004A
        float switchCooldownUntil; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        bool isTransitioning; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float edgePushAccumulator; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        Vector2 lastEdgeDirection; // 0x0058
    
        // Methods
        void Awake();  // RVA: 0x4D27E0
        RectTransform* ResolveFrameRoot();  // RVA: 0x4D35C0
        RectTransform* ResolveCanvasRect();  // RVA: 0x4D34C0
        void OnPointerDown(PointerEventData* eventData);  // RVA: 0x4D31C0
        void OnDrag(PointerEventData* eventData);  // RVA: 0x4D2B30
        void OnPointerUp(PointerEventData* eventData);  // RVA: 0x4D3390
        void TrySnapToNearestCorner();  // RVA: 0x4D37D0
        Vector2 GetEdgeDirection(RectTransform* fr, RectTransform* cr, float margin);  // RVA: 0x4D2940
        IEnumerator* RepositionAfterMonitorSwitch(Vector2 direction, PointerEventData* eventData);  // RVA: 0x4D3410
        void .ctor();  // RVA: 0x4D3C10
    };

    // Namespace: AutoBattle.UI
    class GraveyardBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* backgroundSottoSprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* backgroundSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite[][] batFrames; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite[][] spiderFrames; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float pixelScale; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool applyPixelScaleToBackground; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float batFrameRate; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float batFlySpeed; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float batBobAmplitude; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float batBobPeriod; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float batBaseY; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float batRespawnMin; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float batRespawnMax; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float batYJitter; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float spiderFrameRate; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        bool spiderStatic; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        Vector2 spiderFixedPosition; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        float spiderWalkSpeed; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float spiderBaseY; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        float spiderRespawnMin; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        float spiderRespawnMax; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        float spiderYJitter; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        bool spiderWalksRight; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        RectTransform* bgSottoLayer; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        RectTransform* batLayer; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        RectTransform* bgLayer; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        RectTransform* spiderLayer; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        RectTransform* rect; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Image* batImage; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        int32_t batFrameIdx; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        float batTimer; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        float batX; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float batCurrentBaseY; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float batPhase; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float batRespawnTimer; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        bool batActive; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        float batHalfWidth; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        Image* spiderImage; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        int32_t spiderFrameIdx; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        float spiderTimer; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        float spiderX; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        float spiderCurrentBaseY; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        float spiderRespawnTimer; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        bool spiderActive; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        float spiderHalfWidth; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        bool built; // 0x0104
    
        // Methods
        void Awake();  // RVA: 0x4D4A20
        void OnEnable();  // RVA: 0x4D56E0
        void Build();  // RVA: 0x4D4A80
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, bool raycast);  // RVA: 0x4D5500
        void Update();  // RVA: 0x4D5700
        void SetSprites(Sprite* bgSotto, Sprite* bg, Sprite[][] bat, Sprite[][] spider);  // RVA: 0x4CB770
        void .ctor();  // RVA: 0x4D5EC0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<System.String> <>9__66_5;
    // static System.Func<System.String> <>9__66_6;
    // static System.Func<System.String> <>9__66_7;
    // static System.Func<System.String> <>9__66_8;
    // static System.Func<System.String> <>9__66_0;
    // static System.Func<System.String> <>9__66_1;
    // static System.Func<System.String> <>9__66_2;
    // static UnityAction* <>9__66_3;
    // static System.Func<System.String> <>9__66_4;
    // static System.Func<System.String> <>9__67_0;
    // static System.Func<System.String> <>9__68_0;
    // static System.Func<System.String> <>9__71_0;
    // static System.Func<System.String> <>9__72_0;


    // Methods
    static void .cctor();  // RVA: 0x4EEB30
    void .ctor();  // RVA: 0x4BD420
    Il2CppString* <Start>b__66_5();  // RVA: 0x4EE600
    Il2CppString* <Start>b__66_6();  // RVA: 0x4EE800
    Il2CppString* <Start>b__66_7();  // RVA: 0x4EE8A0
    Il2CppString* <Start>b__66_8();  // RVA: 0x4EE940
    Il2CppString* <Start>b__66_0();  // RVA: 0x4EE380
    Il2CppString* <Start>b__66_1();  // RVA: 0x4EE420
    Il2CppString* <Start>b__66_2();  // RVA: 0x4EE4C0
    void <Start>b__66_3();  // RVA: 0x4B53F0
    Il2CppString* <Start>b__66_4();  // RVA: 0x4EE560
    Il2CppString* <AttachHomePwrTooltip>b__67_0();  // RVA: 0x4EDE10
    Il2CppString* <AttachHomeRankTooltip>b__68_0();  // RVA: 0x4EDEB0
    Il2CppString* <AttachHomeHpTooltip>b__71_0();  // RVA: 0x4EDB70
    Il2CppString* <AttachHomeXpTooltip>b__72_0();  // RVA: 0x4EE0C0
};

// Namespace: <global>
class <PlayBattleIconAnim>d__80
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    HomeScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4ED110
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4ED270
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <RefreshHomeNextFrame>d__83
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    HomeScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4ED410
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4ED530
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <ShowBonusEventWhenStartupClear>d__75
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4EDA20
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EDAF0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <ShowDemoSaveNoticeNextFrame>d__74
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4BB670
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EDB30
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class HomeScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static Rarity[][] forgeSourceRarities;
        // static int32_t FORGE_NEEDED;
    
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_Text* steamNameText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text* nameText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* levelText; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* xpLabel; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* psValueText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        TMP_Text* sectorLabel; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        TMP_Text* staminaLabel; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        TMP_Text* hpLabel; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        TMP_Text* battleTimeLabel; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Image* xpBarFill; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Image* staminaBarFill; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Image* hpBarFill; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        AnimatedHPBar* homeAnimatedHpBar; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Image* homePlayerSpriteImage; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        SpriteAnimator* homePlayerAnimator; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        EquipOverlayController* homeOverlay; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        GameObject* outskirtsBackground; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* villageBackground; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        GameObject* graveyardBackground; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        GameObject* forestBackground; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        GameObject* restBackground; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        GameObject* avatarPlaceholder; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Button* equipButton; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        GameObject* equipDropsBadge; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Button* inventoryButton; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        GameObject* inventoryDropsBadge; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Button* forgeButton; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        GameObject* forgeDropsBadge; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Button* battleButton; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        Button* resetButton; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        ForgeScreenUI* forgeScreenUI; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        GameObject* equipSelectedOverlay; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        GameObject* inventorySelectedOverlay; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        GameObject* forgeSelectedOverlay; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        HoverSlideButton* equipHoverSlide; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        HoverSlideButton* inventoryHoverSlide; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        HoverSlideButton* forgeHoverSlide; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        Image* battleButtonFillOverlay; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        Image* battleButtonIcon; // 0x0150
        uint8_t pad_0151[0x7]; // 0x0151
        Sprite[][] battleButtonIconFrames; // 0x0158
        uint8_t pad_0159[0x7]; // 0x0159
        float battleButtonIconFps; // 0x0160
        uint8_t pad_0161[0x7]; // 0x0161
        Coroutine* battleIconCoroutine; // 0x0168
        uint8_t pad_0169[0x7]; // 0x0169
        Button* homeSettingsToggleButton; // 0x0170
        uint8_t pad_0171[0x7]; // 0x0171
        Sprite* homeSettingsOpenSprite; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        Sprite* homeSettingsClosedSprite; // 0x0180
        uint8_t pad_0181[0x7]; // 0x0181
        GameObject* homeSettingsBar; // 0x0188
        uint8_t pad_0189[0x7]; // 0x0189
        Button* homeSettingsQuitButton; // 0x0190
        uint8_t pad_0191[0x7]; // 0x0191
        Button* homeSettingsOptionsButton; // 0x0198
        uint8_t pad_0199[0x7]; // 0x0199
        Button* homeSettingsStatsButton; // 0x01A0
        uint8_t pad_01A1[0x7]; // 0x01A1
        Button* homeSettingsScaleButton; // 0x01A8
        uint8_t pad_01A9[0x7]; // 0x01A9
        GameObject* settingsPanel; // 0x01B0
        uint8_t pad_01B1[0x7]; // 0x01B1
        bool homeSettingsBarOpen; // 0x01B8
        uint8_t pad_01B9[0x7]; // 0x01B9
        TMP_Text* battleButtonText; // 0x01C0
        uint8_t pad_01C1[0x7]; // 0x01C1
        TMP_Text* playFabStatusText; // 0x01C8
        uint8_t pad_01C9[0x7]; // 0x01C9
        TMP_Text* rpTierText; // 0x01D0
        uint8_t pad_01D1[0x7]; // 0x01D1
        TMP_Text* rpValueText; // 0x01D8
        uint8_t pad_01D9[0x7]; // 0x01D9
        LeaderboardUI* leaderboardUI; // 0x01E0
        uint8_t pad_01E1[0x7]; // 0x01E1
        bool isBattleActive; // 0x01E8
        uint8_t pad_01E9[0x3]; // 0x01E9
        float pfStatusTimer; // 0x01EC
        uint8_t pad_01ED[0x3]; // 0x01ED
        bool subscribedToRanking; // 0x01F0
        uint8_t pad_01F1[0x7]; // 0x01F1
        System.Collections.Generic.Dictionary<AutoBattle.Data.Rarity,System.Int32> forgeBadgeSnapshot; // 0x01F8
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x4DB930
        static Il2CppString* T(Il2CppString* key, Object[][] args);  // RVA: 0x4DB8C0
        void Update();  // RVA: 0x4DCF00
        void Start();  // RVA: 0x4DA640
        void AttachHomePwrTooltip();  // RVA: 0x4D62A0
        void AttachHomeRankTooltip();  // RVA: 0x4D63F0
        static void AttachTooltipOnTextAndSibling(TMP_Text* valueText, Il2CppString* siblingName, System.Func<System.String> textProvider);  // RVA: 0x4D68B0
        static void AttachTextProviderTooltip(GameObject* host, System.Func<System.String> textProvider);  // RVA: 0x4D6750
        void AttachHomeHpTooltip();  // RVA: 0x4D6090
        void AttachHomeXpTooltip();  // RVA: 0x4D6540
        void OnDestroy();  // RVA: 0x4D7860
        IEnumerator* ShowDemoSaveNoticeNextFrame();  // RVA: 0x4DA340
        IEnumerator* ShowBonusEventWhenStartupClear();  // RVA: 0x4DA2F0
        void OnEnable();  // RVA: 0x4D7CB0
        void OnDisable();  // RVA: 0x4D78F0
        void StartBattleIconAnim();  // RVA: 0x4DA520
        void StopBattleIconAnim();  // RVA: 0x4DB870
        IEnumerator* PlayBattleIconAnim();  // RVA: 0x4D8B70
        void HandleEquipmentChanged();  // RVA: 0x4D6CE0
        void HandleLanguageChanged();  // RVA: 0x4D7080
        IEnumerator* RefreshHomeNextFrame();  // RVA: 0x4D8BE0
        void RefreshHome();  // RVA: 0x4D8C50
        void UpdateBattleButtonUI();  // RVA: 0x4DBD50
        static void OverwriteSiblingLabel(TMP_Text* valueText, Il2CppString* siblingName, Il2CppString* newLabel);  // RVA: 0x4D89D0
        void UpdateRankLabel();  // RVA: 0x4DC550
        void UpdatePlayFabStatus();  // RVA: 0x4DBF30
        void OnEquipClicked();  // RVA: 0x4D8130
        void OnInventoryClicked();  // RVA: 0x4D8640
        void OnForgeClicked();  // RVA: 0x4D82A0
        void SnapshotForgeThresholds();  // RVA: 0x4DA390
        void OnBattleClicked();  // RVA: 0x4D77D0
        void OnResetClicked();  // RVA: 0x4D8980
        void OnQuitClicked();  // RVA: 0x4D8890
        void OnLeaderboardClicked();  // RVA: 0x4D87B0
        static void AddTooltipToButton(Button* btn, System.Func<System.String> textProvider, Side side);  // RVA: 0x4D5F60
        void ToggleHomeSettingsBar();  // RVA: 0x4DB990
        void UpdateHomeToggleIcon();  // RVA: 0x4DBE50
        void ToggleSettingsPanel();  // RVA: 0x4DBAF0
        void HandleBattleStateChange(bool isActive);  // RVA: 0x4D6CD0
        void HandleRPChanged(int32_t rp, int32_t delta, RankTier tier);  // RVA: 0x4D7100
        Il2CppString* FormatTime(float totalSeconds);  // RVA: 0x4D6A80
        static Il2CppString* ResolveCharacterIdleResourceSuffix(CharacterType c);  // RVA: 0x4D9F60
        void InitHomePlayerSprite();  // RVA: 0x4D7110
        void SetBarFill(Image* fillImage, float value);  // RVA: 0x4DA030
        void SetButtonOverlays(bool equip, bool inventory, bool forge);  // RVA: 0x4DA0F0
        void UpdateSectorBackground();  // RVA: 0x4DC930
        void .ctor();  // RVA: 0x4DD620
        static void .cctor();  // RVA: 0x4DD590
        void <ToggleSettingsPanel>b__100_0();  // RVA: 0x4DBCD0
    };

    // Namespace: AutoBattle.UI
    class HoverSlideButton : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite[][] frames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* buttonImage; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        RectTransform* iconTransform; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* iconImage; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        RectTransform* badgeTransform; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Vector2 badgeIdlePos; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Vector2 badgeVisiblePos; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        AnimationCurve* badgeEasingCurve; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        float badgeAnimationDuration; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float idleOffsetX; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float visibleOffsetX; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float animationDuration; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float progress; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float badgeProgress; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        bool isHovered; // 0x0078
        bool isSelected; // 0x0079
        bool isInitialized; // 0x007A
    
        // Methods
        void Awake();  // RVA: 0x4DDA70
        void OnEnable();  // RVA: 0x4DDAF0
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4DDB00
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4DDB10
        void SetSelected(bool selected);  // RVA: 0x4DDB20
        void Update();  // RVA: 0x4DDB30
        void ApplyState();  // RVA: 0x4DD6B0
        void .ctor();  // RVA: 0x4DDD10
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct ItemRarity
{
public:
    // Static fields
    // static ItemRarity All;
    // static ItemRarity Common;
    // static ItemRarity Rare;
    // static ItemRarity Epic;
    // static ItemRarity Legendary;
    // static ItemRarity Mythic;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<AutoBattle.Data.ItemInstance> <>9__41_0;


    // Methods
    static void .cctor();  // RVA: 0x4EEAC0
    void .ctor();  // RVA: 0x4BD420
    int32_t <RefreshItemGrid>b__41_0(ItemInstance* a, ItemInstance* b);  // RVA: 0x4EE350
};

// Namespace: <global>
class <>c__DisplayClass38_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Int32> onChanged; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CreateFilterDropdown>b__0(int32_t idx);  // RVA: 0x4EE9E0
};

// Namespace: <global>
class <>c__DisplayClass41_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <RefreshItemGrid>b__1(ItemData* id);  // RVA: 0x4BD430
    bool <RefreshItemGrid>b__2(ItemData* id);  // RVA: 0x4D42E0
};

// Namespace: <global>
class <>c__DisplayClass44_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    InventoryScreenUI* <>4__this; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <CreateItemCard>b__0(ItemData* id);  // RVA: 0x4BD430
    bool <CreateItemCard>b__1(ItemData* id);  // RVA: 0x4D42E0
};

// Namespace: <global>
class <>c__DisplayClass44_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemData* itemDataCopy; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instanceCopy; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameObject* cardRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass44_0* CS$<>8__locals1; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CreateItemCard>b__2();  // RVA: 0x4EEA00
};

// Namespace: <global>
class <>c__DisplayClass50_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* featureName; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <EnsureDemoLockOverlay>b__0();  // RVA: 0x4EEA40
};

// Namespace: <global>
class <PositionActionPanelDeferred>d__31
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    InventoryScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4ED2B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4ED320
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <ReapplyDropdownLocalizationNextFrame>d__30
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    InventoryScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4ED360
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4ED3D0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class InventoryScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static Color dropdownBgColor;
        // static Color dropdownItemColor;
        // static Color dropdownHighlightColor;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Transform* filterParent; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* filterButtonPrefab; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Transform* gridParent; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* itemCardPrefab; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Button* backButton; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Button* equipButton; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        ScrollRect* itemScrollRect; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float dropdownTemplatePadding; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        GameObject* actionPanel; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Button* actionEquipButton; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Button* sellButton; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        ItemData* selectedItem; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        ItemInstance* selectedInstance; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameObject* selectedCardObj; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        GameObject* floatingButtonsPanel; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        ItemRarity currentRarityFilter; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Il2CppString* currentElementFilter; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        Il2CppString* currentSlotFilter; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        TMP_Dropdown* rarityDropdown; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        TMP_Dropdown* slotDropdown; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        TMP_Dropdown* elementDropdown; // 0x00C0
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x4E6680
        void Start();  // RVA: 0x4E6410
        void EnsureScrollMaskConfigured();  // RVA: 0x4E2F20
        void OnEnable();  // RVA: 0x4E41F0
        void HandleLanguageChanged();  // RVA: 0x4E36E0
        IEnumerator* ReapplyDropdownLocalizationNextFrame();  // RVA: 0x4E4680
        IEnumerator* PositionActionPanelDeferred();  // RVA: 0x4E43D0
        void PositionActionPanel();  // RVA: 0x4E4440
        void OnDisable();  // RVA: 0x4E3EF0
        void RefreshInventory();  // RVA: 0x4E49D0
        void ApplyDropdownLocalization();  // RVA: 0x4DDD70
        void WireDropdownCallbacks();  // RVA: 0x4E6B70
        void CreateFilterButtons();  // RVA: 0x4DEA70
        TMP_Dropdown* CreateFilterDropdown(Il2CppString* name, Transform* parent, System.Collections.Generic.List<System.String> options, int32_t defaultIndex, System.Action<System.Int32> onChanged);  // RVA: 0x4DFE30
        void EnsureDropdownScrollbar(TMP_Dropdown* dropdown);  // RVA: 0x4E27E0
        void ResizeDropdownTemplateToFitOptions(TMP_Dropdown* dropdown);  // RVA: 0x4E5A70
        void RefreshItemGrid();  // RVA: 0x4E5180
        bool MatchesRarityFilter(Rarity rarityEnum, ItemRarity filter);  // RVA: 0x4E3800
        bool MatchesSlotFilter(EquipSlot slot, Il2CppString* filter);  // RVA: 0x4E3850
        void CreateItemCard(ItemInstance* itemInstance);  // RVA: 0x4E1B20
        void SelectItem(ItemData* item, ItemInstance* instance, GameObject* cardObj);  // RVA: 0x4E6150
        void ApplySelectionHighlight(GameObject* cardObj);  // RVA: 0x4DE9B0
        void RemoveSelectionHighlight(GameObject* cardObj);  // RVA: 0x4E59B0
        void HideFloatingButtons();  // RVA: 0x4E3760
        void RefreshActionButtons();  // RVA: 0x4E46F0
        void EnsureDemoLockOverlay(GameObject* target, bool show, Il2CppString* analyticsFeatureName);  // RVA: 0x4E2050
        void RefreshGridOnly();  // RVA: 0x4E4960
        void OnActionEquipClicked();  // RVA: 0x4E39B0
        void OnActionSellClicked();  // RVA: 0x4E3D50
        Il2CppString* GetFirstCompatibleSlot(EquipSlot slot);  // RVA: 0x4E31C0
        Il2CppString* GetSlotDisplayName(EquipSlot slot);  // RVA: 0x4E3510
        void OnBackClicked();  // RVA: 0x4E3EA0
        void OnEquipClicked();  // RVA: 0x4E4380
        Il2CppString* GetCategoryIcon(ElementCategory cat);  // RVA: 0x4E30F0
        Color GetRarityColor(Rarity rarity);  // RVA: 0x4E33C0
        Il2CppString* GetRarityHexColor(Rarity rarity);  // RVA: 0x4E3440
        Color GetRarityTextColor(Rarity rarity);  // RVA: 0x4CE410
        void .ctor();  // RVA: 0x4E6E60
        static void .cctor();  // RVA: 0x4E6DE0
        void <WireDropdownCallbacks>b__36_0(int32_t idx);  // RVA: 0x4E66E0
        void <WireDropdownCallbacks>b__36_1(int32_t idx);  // RVA: 0x4E6960
        void <WireDropdownCallbacks>b__36_2(int32_t idx);  // RVA: 0x4E6A80
        void <CreateFilterButtons>b__37_0(int32_t idx);  // RVA: 0x4E66E0
        void <CreateFilterButtons>b__37_1(int32_t idx);  // RVA: 0x4E6750
        void <CreateFilterButtons>b__37_2(int32_t idx);  // RVA: 0x4E6870
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <AnimateIcon>d__36
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float fps; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ItemCardUI* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t <frameIndex>5__2; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <delay>5__3; // 0x0034

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x4ECF60
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4ED0D0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class ItemCardUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* equippedBG; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* icon; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Image* rarityFrame; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* elementDot; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Image* selectionFrame; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* selectedFrame; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Sprite* elementFire; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite* elementIce; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Sprite* elementHoly; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Sprite* elementArcane; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite* elementShadow; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Sprite* rarityFrameSprite; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Sprite* equippedFrameSprite; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Sprite* selectionFrameSprite; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Sprite[][] iconAnimFrames; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        float iconAnimFps; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Coroutine* iconAnimCoroutine; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* newBadge; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        ItemInstance* boundInstance; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        System.Action<AutoBattle.Data.ItemInstance> OnMarkedAsSeen; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        bool suppressMarkAsSeen; // 0x00C0
        bool _isSelected; // 0x00C1
        uint8_t pad_00C2[0x6]; // 0x00C2
        RectTransform* _viewportRect; // 0x00C8
    
        // Methods
        ItemInstance* get_BoundInstance();  // RVA: 0x4E83B0
        void add_OnMarkedAsSeen(System.Action<AutoBattle.Data.ItemInstance> value);  // RVA: 0x4E82F0
        void remove_OnMarkedAsSeen(System.Action<AutoBattle.Data.ItemInstance> value);  // RVA: 0x4E83C0
        void Setup(ItemData* itemData, ItemInstance* itemInstance, bool isEquipped, bool isSelected);  // RVA: 0x4E7C10
        void HideNewBadge();  // RVA: 0x4E7020
        void RefreshNewBadge();  // RVA: 0x4E75A0
        void MarkAsSeen();  // RVA: 0x4E7290
        void SetSelected(bool selected);  // RVA: 0x4E7860
        void LateUpdate();  // RVA: 0x4E70B0
        static bool RectFullyInside(RectTransform* a, RectTransform* b);  // RVA: 0x4E74A0
        void SetEquipped(bool equipped, Rarity rarity);  // RVA: 0x4E7640
        Sprite* GetElementSprite(ElementCategory category);  // RVA: 0x4E6F70
        IEnumerator* AnimateIcon(float fps);  // RVA: 0x4E6EF0
        void OnEnable();  // RVA: 0x4E73C0
        void OnDisable();  // RVA: 0x4E7370
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4E7290
        static Color GetRarityBrightColor(Rarity rarity);  // RVA: 0x4E6FB0
        void .ctor();  // RVA: 0x4E82E0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass29_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* equippedCtx; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <ResolveEquippedItemForComparison>b__0(ItemData* t);  // RVA: 0x4BD430
};

// Namespace: <global>
class <>c__DisplayClass29_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* shieldEquipped; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <ResolveEquippedItemForComparison>b__1(ItemData* t);  // RVA: 0x4BD430
};

// Namespace: <global>
class <>c__DisplayClass29_2
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* equipped; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <ResolveEquippedItemForComparison>b__2(ItemData* t);  // RVA: 0x4BD430
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class ItemTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static GameObject* activeTooltip;
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static float TOOLTIP_INSIDE_FRACTION;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        ItemData* itemData; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        ItemInstance* itemInstance; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* tooltipPanel; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Il2CppString* contextSlotKey; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Il2CppString* headerText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        bool suppressEquippedLabel; // 0x0048
    
        // Methods
        void Setup(ItemData* data, ItemInstance* instance);  // RVA: 0x4EC980
        void Setup(ItemData* data, ItemInstance* instance, Il2CppString* explicitSlotKey);  // RVA: 0x4EC9E0
        void SetHeader(Il2CppString* header);  // RVA: 0x4EC960
        void SetSuppressEquippedLabel(bool suppress);  // RVA: 0x4EC970
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4EBD30
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4EBD20
        void OnDisable();  // RVA: 0x4EBD20
        void HideSelf();  // RVA: 0x4EBB20
        GameObject* CreateTooltipPanel();  // RVA: 0x4E9CD0
        static TMP_Text* FindTooltipText(GameObject* panel);  // RVA: 0x4EA6A0
        static GameObject* BuildDefaultPanel(Transform* tooltipParent);  // RVA: 0x4E8480
        void PositionTooltip(RectTransform* tooltipRect);  // RVA: 0x4EBE50
        static RectTransform* FindDirectChildOfParent(RectTransform* child, RectTransform* root);  // RVA: 0x4EA4C0
        Il2CppString* BuildTooltipContent();  // RVA: 0x4E89C0
        static Il2CppString* FormatStatLine(Il2CppString* label, float value, float equippedValue, Il2CppString* baseColor, bool showDiff);  // RVA: 0x4EABC0
        static Il2CppString* FormatStatLinePercent(Il2CppString* label, float value, float equippedValue, Il2CppString* baseColor, bool showDiff);  // RVA: 0x4EA7F0
        bool TryComputePowerScoreDelta(int32_t delta);  // RVA: 0x4ECA50
        Il2CppString* ResolveSimulationSlotKey(PlayerState* ps);  // RVA: 0x4EC830
        ItemData* ResolveEquippedItemForComparison(EquipSlot slot);  // RVA: 0x4EC390
        static String[][] GetSlotKeys(EquipSlot slot);  // RVA: 0x4EB510
        Il2CppString* GetSlotName(EquipSlot slot);  // RVA: 0x4EB720
        Il2CppString* GetRarityName(Rarity rarity);  // RVA: 0x4EB320
        Il2CppString* GetElementName(ElementCategory category);  // RVA: 0x4EB060
        Il2CppString* GetRarityHexColor(Rarity rarity);  // RVA: 0x4EB250
        Il2CppString* GetElementHexColor(ElementCategory category);  // RVA: 0x4EAF90
        static void HideActiveTooltip();  // RVA: 0x4EB960
        void .ctor();  // RVA: 0x4E82E0
        bool <TryComputePowerScoreDelta>b__27_0(ItemInstance* it);  // RVA: 0x4ECF30
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct LeaderboardTab
{
public:
    // Static fields
    // static LeaderboardTab Global;
    // static LeaderboardTab Friends;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<TMPro.TMP_Text> <>9__45_0;
    // static System.Comparison<AutoBattle.Steam.LeaderboardEntry> <>9__55_0;


    // Methods
    static void .cctor();  // RVA: 0x5042F0
    void .ctor();  // RVA: 0x4BD420
    int32_t <WireSceneAuthored>b__45_0(TMP_Text* a, TMP_Text* b);  // RVA: 0x5041A0
    int32_t <FetchFriendsLeaderboard>b__55_0(LeaderboardEntry* a, LeaderboardEntry* b);  // RVA: 0x504170
};

// Namespace: <global>
class <>c__DisplayClass49_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LeaderboardEntry[][] topEntries; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    LeaderboardEntry[][] aroundEntries; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t myPosition; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <RefreshCoroutine>b__0(LeaderboardEntry[][] top, LeaderboardEntry[][] around, int32_t pos);  // RVA: 0x504270
    void <RefreshCoroutine>b__1(LeaderboardEntry[][] entries);  // RVA: 0x5042C0
};

// Namespace: <global>
class <>c__DisplayClass53_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* onClick; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <RefreshTabButton>b__0();  // RVA: 0x5042D0
};

// Namespace: <global>
class <>c__DisplayClass54_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* onClick; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CreateTabButton>b__0();  // RVA: 0x5042D0
};

// Namespace: <global>
class <>c__DisplayClass55_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,System.String> steamToPlayFab; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <FetchFriendsLeaderboard>b__1(System.Collections.Generic.Dictionary<System.String,System.String> m);  // RVA: 0x5042C0
};

// Namespace: <global>
class <>c__DisplayClass55_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* fetchResponse; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <FetchFriendsLeaderboard>b__2(bool ok, Il2CppString* resp);  // RVA: 0x504240
};

// Namespace: <global>
class <FetchFriendsLeaderboard>d__55
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    <>c__DisplayClass55_0* <>8__1; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass55_1* <>8__2; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<AutoBattle.Steam.LeaderboardEntry[]> callback; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> <result>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Il2CppString* <myPlayFabId>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.HashSet<System.String> <friendPlayFabIds>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x502A50
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5039B0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <RefreshCoroutine>d__49
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    LeaderboardUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass49_0* <>8__1; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x5039F0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x504130
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class LeaderboardUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static LeaderboardUI* _instance;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* overlayRoot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* contentContainer; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Button* closeButton; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* titleText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* seasonInfoText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        TMP_Text* statusText; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        TMP_Text* rankTierNameText; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        TMP_Text* rankRPValueText; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        TMP_Text* rankStreakText; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        TMP_Text* rankWinText; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        TMP_Text* rankLossText; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Image* tierProgressFill; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Image* rankCardImage; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameObject* rowTemplate; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        GameObject* matchRowTemplateW; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        GameObject* matchRowTemplateL; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        GameObject* leaderboardTabBar; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        bool isOpen; // 0x00A8
        bool isFetching; // 0x00A9
        bool sceneWired; // 0x00AA
        uint8_t pad_00AB[0x5]; // 0x00AB
        System.Collections.Generic.List<UnityEngine.GameObject> dynamicRows; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        LeaderboardTab currentTab; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        bool tabVisualsCached; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        Color cachedSelectedBgColor; // 0x00C0
        uint8_t pad_00C1[0xF]; // 0x00C1
        Sprite* cachedSelectedBgSprite; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Color cachedSelectedTextColor; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        FontStyles cachedSelectedFontStyle; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        Color cachedDeselectedBgColor; // 0x00EC
        uint8_t pad_00ED[0x13]; // 0x00ED
        Sprite* cachedDeselectedBgSprite; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        Color cachedDeselectedTextColor; // 0x0108
        uint8_t pad_0109[0xF]; // 0x0109
        FontStyles cachedDeselectedFontStyle; // 0x0118
    
        // Methods
        static LeaderboardUI* get_Instance();  // RVA: 0x4F8490
        void OnDestroy();  // RVA: 0x4F5FB0
        void Update();  // RVA: 0x4F70E0
        bool get_IsOpen();  // RVA: 0x4F8650
        void Toggle();  // RVA: 0x4F6F40
        void Open();  // RVA: 0x4F6060
        void PositionMainPanel();  // RVA: 0x4F6180
        void RefreshStaticTexts();  // RVA: 0x4F65F0
        void Close();  // RVA: 0x4F4C10
        void EnsureBuilt();  // RVA: 0x4F51E0
        void WireSceneAuthored();  // RVA: 0x4F7190
        static Transform* FindDescendant(Transform* root, Il2CppString* name);  // RVA: 0x4F5400
        float GetReferenceSpacerHeight(float fallback);  // RVA: 0x4F5510
        void Refresh();  // RVA: 0x4F6D60
        IEnumerator* RefreshCoroutine();  // RVA: 0x4F6580
        void SwitchTab(LeaderboardTab tab);  // RVA: 0x4F6F10
        void BuildTabBar();  // RVA: 0x4F4200
        void CacheTabVisualsFromScene(Transform* tabBarRoot);  // RVA: 0x4F47D0
        void RefreshTabButton(Transform* tabBarRoot, Il2CppString* childName, bool selected, Action* onClick);  // RVA: 0x4F69A0
        void CreateTabButton(Transform* parent, Il2CppString* label, bool selected, Action* onClick);  // RVA: 0x4F4CA0
        IEnumerator* FetchFriendsLeaderboard(System.Action<AutoBattle.Steam.LeaderboardEntry[]> callback);  // RVA: 0x4F5390
        void BuildPanel();  // RVA: 0x4F1650
        void BuildRankHeader();  // RVA: 0x4F2E70
        void BuildLeaderboardContent(LeaderboardEntry[][] topEntries, LeaderboardEntry[][] aroundEntries, int32_t myPosition);  // RVA: 0x4F0970
        void BuildPvPMatchHistory();  // RVA: 0x4F2920
        void AddMatchRow(PvPMatchRecord* match);  // RVA: 0x4EFA60
        void AddLeaderboardRow(int32_t rank, Il2CppString* playerName, int32_t rp, bool isMe);  // RVA: 0x4EEF60
        static void SetChildText(Transform* parent, Il2CppString* childName, Il2CppString* text, Color color);  // RVA: 0x4F6DF0
        void AddColumnHeader();  // RVA: 0x4EEBC0
        void AddSectionLabel(Il2CppString* text);  // RVA: 0x4F0700
        void AddSpacer(float height);  // RVA: 0x4F0880
        GameObject* MakeAnchoredText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions textAlign, bool leftAnchor, float offsetX, float width, float height);  // RVA: 0x4F5720
        GameObject* MakeText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions anchor, Vector2 pos, Vector2 size);  // RVA: 0x4F5D70
        GameObject* MakeChildText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions anchor, Vector2 pos, Vector2 size);  // RVA: 0x4F59E0
        void .ctor();  // RVA: 0x4F8410
        void <BuildTabBar>b__51_0();  // RVA: 0x4F7080
        void <BuildTabBar>b__51_1();  // RVA: 0x4F70B0
        void <BuildTabBar>b__51_2();  // RVA: 0x4F7080
        void <BuildTabBar>b__51_3();  // RVA: 0x4F70B0
    };

    // Namespace: AutoBattle.UI
    class LocalizeText : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* localizationKey; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool disableAtRuntime; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* tmpText; // 0x0030
    
        // Methods
        Il2CppString* get_LocalizationKey();  // RVA: 0x4F89C0
        void set_LocalizationKey(Il2CppString* value);  // RVA: 0x4F89D0
        void Awake();  // RVA: 0x4F8660
        void OnEnable();  // RVA: 0x4F87C0
        void OnDisable();  // RVA: 0x4F86B0
        void RefreshText();  // RVA: 0x4F88E0
        void .ctor();  // RVA: 0x4E82E0
    };

    // Namespace: AutoBattle.UI
    class NotificationUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_Text* messageText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float displayDuration; // 0x0028
    
        // Methods
        void Initialize(Il2CppString* message, NotificationType type);  // RVA: 0x4F8A00
        void .ctor();  // RVA: 0x4F8B90
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class ChallengeLogResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ChallengeLogResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class ChallengeLogResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ChallengeLogDict* Data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class ChallengeLogDict
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ChallengeLogRecord* PvPChallengeLog; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class ChallengeLogRecord
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* Value; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class <>c__DisplayClass13_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* fetchResponse; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool clearOk; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <FetchAndShowRealResults>b__0(bool ok, Il2CppString* r);  // RVA: 0x504240
    void <FetchAndShowRealResults>b__1(bool ok);  // RVA: 0x504260
};

// Namespace: <global>
class <FetchAndShowRealResults>d__13
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    <>c__DisplayClass13_0* <>8__1; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    OfflinePvPSummaryUI* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<AutoBattle.UI.OfflinePvPResult> <results>5__2; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t <totalXP>5__3; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    int32_t <wins>5__4; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    int32_t <losses>5__5; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t <totalRP>5__6; // 0x0044

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x501E20
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x502A10
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class OfflinePvPSummaryUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static int32_t OFFLINE_PVP_XP_WIN;
        // static int32_t OFFLINE_PVP_XP_LOSE;
        // static Il2CppString* PREF_LAST_SESSION;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* summaryPanel; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Transform* contentContainer; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* subtitleText; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* summaryLineText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Button* closeButton; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        TMP_Text* titleText; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        GameObject* resultEntryTemplate; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        System.Collections.Generic.List<UnityEngine.GameObject> dynamicEntries; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        bool hasChecked; // 0x0060
        bool sceneContentWired; // 0x0061
    
        // Methods
        void CheckOfflinePvP();  // RVA: 0x4F8C20
        IEnumerator* FetchAndShowRealResults();  // RVA: 0x4F9A70
        void SaveSessionTimestamp();  // RVA: 0x4FC690
        static void SaveLastSessionTime();  // RVA: 0x4FC600
        void ShowSummaryPanel(System.Collections.Generic.List<AutoBattle.UI.OfflinePvPResult> results, int32_t totalXP, int32_t totalRP, int32_t wins, int32_t losses);  // RVA: 0x4FC720
        void WireSceneAuthoredContent(Transform* innerPanel);  // RVA: 0x4FC9F0
        static Transform* FindDescendant(Transform* root, Il2CppString* name);  // RVA: 0x4F9B80
        static TMP_Text* FindDescendantTMP(Transform* root, Il2CppString* name);  // RVA: 0x4F9AE0
        void EnsureSummaryPanel();  // RVA: 0x4F9280
        void PopulateInnerContent(Transform* innerPanel, System.Collections.Generic.List<AutoBattle.UI.OfflinePvPResult> results, int32_t totalXP, int32_t totalRP, int32_t wins, int32_t losses);  // RVA: 0x4F9C90
        void CreateText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions alignment, Vector2 pos, Vector2 size);  // RVA: 0x4F9040
        void CloseSummary();  // RVA: 0x4F8D60
        void .ctor();  // RVA: 0x4FCD60
    };

    // Namespace: AutoBattle.UI
    class OfflineChallengeLog
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<AutoBattle.UI.OfflineChallenge> challenges; // 0x0010
    
        // Methods
        void .ctor();  // RVA: 0x4F8BA0
    };

    // Namespace: AutoBattle.UI
    class OfflineChallenge
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* challengerName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t challengerLevel; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t challengerPowerScore; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        bool challengerWon; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t timestampTicks; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int64_t timestamp; // 0x0030
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.UI
    class OfflinePvPResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* challengerName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t challengerLevel; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t challengerPowerScore; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        bool won; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t timestampTicks; // 0x0028
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.UI
    class OutskirtsBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* skySprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* cloudsSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* mountainsSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite* grassSprite; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Sprite* statueSprite; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite[][] animalFrames; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        float pixelScale; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        bool applyPixelScaleToStaticLayers; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float animalFrameRate; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float animalWalkSpeed; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float animalBaseY; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float animalRespawnMin; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float animalRespawnMax; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float animalYJitter; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        bool animalWalksRight; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float cloudScrollSpeed; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        Color cloudTint; // 0x0078
        uint8_t pad_0079[0xF]; // 0x0079
        float cloudYOffset; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        float mountainsYOffset; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        float statueXOffset; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        float statueYOffset; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        RectTransform* skyLayer; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        RectTransform* cloudContainerRT; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        RectTransform* cloudART; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        RectTransform* cloudBRT; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        RectTransform* mountainsLayer; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        RectTransform* animalLayer; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        RectTransform* statueLayer; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        RectTransform* grassLayer; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        RectTransform* rect; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Image* animalImage; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        int32_t animalFrame; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        float animalTimer; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        float animalX; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        float animalCurrentBaseY; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        float animalRespawnTimer; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        bool animalActive; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        float animalHalfWidth; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        float cloudTileWidth; // 0x0104
        uint8_t pad_0105[0x3]; // 0x0105
        bool built; // 0x0108
    
        // Methods
        void Awake();  // RVA: 0x4FCDE0
        void OnEnable();  // RVA: 0x4FDEB0
        void OnDisable();  // RVA: 0x4FDDF0
        void Build();  // RVA: 0x4FCE40
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, bool raycast);  // RVA: 0x4FDC10
        RectTransform* CreateCloudTile(Il2CppString* name, Transform* parent, Vector2 size, float xOffset);  // RVA: 0x4FDA90
        void Update();  // RVA: 0x4FE010
        void SetSprites(Sprite* sky, Sprite* clouds, Sprite* mountains, Sprite* grass, Sprite* statue, Sprite[][] animal);  // RVA: 0x4FDF80
        void .ctor();  // RVA: 0x4FE590
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass15_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float cursorY; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <ShowTooltip>b__0(Transform* section);  // RVA: 0x518670
};

// Namespace: <global>
class <>c__DisplayClass15_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <ShowTooltip>b__1(ItemData* t);  // RVA: 0x4BD430
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class PlayerBattleTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static float TOOLTIP_GAP_ABOVE;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* tooltipPanel; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool isVisible; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* cachedInfoValues; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* cachedStatValues; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Il2CppString* lastInfoValuesText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Il2CppString* lastStatValuesText; // 0x0048
    
        // Methods
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4FF930
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4FF920
        void OnDisable();  // RVA: 0x4FF920
        void Hide();  // RVA: 0x4FF920
        void Update();  // RVA: 0x501D40
        void ShowTooltip();  // RVA: 0x5002D0
        static void DisableTooltipRaycast(GameObject* panel);  // RVA: 0x4FF0C0
        static GameObject* BuildDefaultPanel(Transform* tooltipParent);  // RVA: 0x4FE600
        void PositionTooltip(RectTransform* tooltipRect);  // RVA: 0x4FFA00
        void HideTooltip();  // RVA: 0x4FF790
        Il2CppString* FormatTime(float totalSeconds);  // RVA: 0x4FF280
        Il2CppString* BuildInfoValuesText(PlayerState* ps, int32_t powerScore);  // RVA: 0x4FE7F0
        Il2CppString* BuildStatValuesText(PlayerStats baseStats, PlayerState* ps);  // RVA: 0x4FEA90
        static Il2CppString* ColorizeStatValue(Il2CppString* display, float eff, float baseVal);  // RVA: 0x4FF010
        static CombatRuntimeEffects* ResolveActiveRuntimeEffects();  // RVA: 0x500240
        void RefreshDynamicSections();  // RVA: 0x500010
        Il2CppString* GetRarityColor(Il2CppString* rarity);  // RVA: 0x4FF630
        Il2CppString* GetCategoryIcon(Il2CppString* category);  // RVA: 0x4FF4D0
        void .ctor();  // RVA: 0x4E82E0
    };

    // Namespace: AutoBattle.UI
    class PrivacyConsentPopup : public MonoBehaviour
    {
    public:
        // Static fields
        // static Il2CppString* DEFAULT_TITLE;
        // static Il2CppString* DEFAULT_BODY;
        // static PrivacyConsentPopup* _sceneInstance;
        // static bool _sceneLookupAttempted;
        // static GameObject* _activeRuntimePopup;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* popupRoot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text* titleText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* bodyText; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Button* gotItButton; // 0x0038
    
        // Methods
        static PrivacyConsentPopup* get_SceneInstance();  // RVA: 0x505E50
        static bool get_IsShowing();  // RVA: 0x505D30
        void OnDestroy();  // RVA: 0x505490
        static void TryShow();  // RVA: 0x505940
        void ShowSceneAuthored();  // RVA: 0x505710
        void OnDismiss();  // RVA: 0x5055C0
        void BuildRuntime(Canvas* rootCanvas);  // RVA: 0x5043A0
        static Button* CreateRuntimeButton(Transform* parent, Il2CppString* label, TMP_FontAsset* font, Color tint, Vector2 anchoredPos);  // RVA: 0x504EF0
        void .ctor();  // RVA: 0x4E82E0
    };

    // Namespace: AutoBattle.UI
    class PulseScale : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float baseScale; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float pulseAmount; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float pulseSpeed; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool startAtPeak; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float timer; // 0x0030
    
        // Methods
        void OnEnable();  // RVA: 0x506080
        void Update();  // RVA: 0x5060B0
        void OnDisable();  // RVA: 0x506030
        void .ctor();  // RVA: 0x506140
    };

    // Namespace: AutoBattle.UI
    class PvEEnemyTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static float TOOLTIP_GAP_ABOVE;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        EnemyState* enemy; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* tooltipPanel; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool isVisible; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        Color nameColorVerde; // 0x0034
        uint8_t pad_0035[0xF]; // 0x0035
        Color nameColorGiallo; // 0x0044
        uint8_t pad_0045[0xF]; // 0x0045
        Color nameColorViola; // 0x0054
    
        // Methods
        void SetNameColors(Color verde, Color giallo, Color viola);  // RVA: 0x507860
        void SetEnemy(EnemyState* pveEnemy);  // RVA: 0x4AE850
        void ClearEnemy();  // RVA: 0x506EA0
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x507240
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x507230
        void OnDisable();  // RVA: 0x507230
        void ShowTooltip();  // RVA: 0x507880
        static TMP_Text* FindTooltipText(GameObject* panel);  // RVA: 0x506ED0
        static GameObject* BuildDefaultPanel(Transform* tooltipParent);  // RVA: 0x506A40
        void PositionTooltip(RectTransform* tooltipRect);  // RVA: 0x507250
        void HideTooltip();  // RVA: 0x5070A0
        void BuildContentSplit(TMP_Text* labels, TMP_Text* values);  // RVA: 0x506160
        Il2CppString* BuildContent();  // RVA: 0x506630
        Il2CppString* GetColorHex(EnemyColor color);  // RVA: 0x507020
        void .ctor();  // RVA: 0x508300
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass15_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float cursorY; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <ShowTooltip>b__0(Transform* section);  // RVA: 0x518AF0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class PvPEnemyTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static float TOOLTIP_GAP_ABOVE;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        PlayerSnapshot* snapshot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int32_t opponentRP; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* tooltipPanel; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        bool isVisible; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* cachedStatValuesB; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Il2CppString* lastStatValuesText; // 0x0048
    
        // Methods
        void SetSnapshot(PlayerSnapshot* pvpSnapshot, int32_t rankingPoints);  // RVA: 0x509A70
        void ClearSnapshot();  // RVA: 0x508AE0
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x509450
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x509440
        void OnDisable();  // RVA: 0x509440
        void ShowTooltip();  // RVA: 0x509AA0
        static void DisableTooltipRaycast(GameObject* panel);  // RVA: 0x508BC0
        static GameObject* BuildDefaultPanel(Transform* tooltipParent);  // RVA: 0x508320
        void PositionTooltip(RectTransform* tooltipRect);  // RVA: 0x509460
        void HideTooltip();  // RVA: 0x509290
        void Update();  // RVA: 0x50BAF0
        Il2CppString* BuildEnemyStatValuesText();  // RVA: 0x508510
        static Il2CppString* ColorizeStatValue(Il2CppString* display, float eff, float baseVal);  // RVA: 0x508B10
        Il2CppString* FormatTime(float totalSeconds);  // RVA: 0x508D80
        Il2CppString* GetRarityColor(Il2CppString* rarity);  // RVA: 0x509130
        Il2CppString* GetCategoryIcon(Il2CppString* category);  // RVA: 0x508FD0
        void .ctor();  // RVA: 0x50BBC0
    };

    // Namespace: AutoBattle.UI
    class RestBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite[][] bgFrames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* backgroundSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite[][] fireFrames; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite[][] humanFrames; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Sprite[][] fireLightFrames; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite[][] particleFrames; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        float bgFrameRate; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float fireFrameRate; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float humanFrameRate; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float fireLightFrameRate; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float particleFrameRate; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        bool useGenderTwoPose; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        Sprite* humanMaleRestUp; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite* humanMaleRestDown; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Sprite* humanFemaleRestUp; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Sprite* humanFemaleRestDown; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Sprite* humanChar3RestUp; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Sprite* humanChar3RestDown; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Sprite* humanChar4RestUp; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Sprite* humanChar4RestDown; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        Sprite* humanChar5RestUp; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Sprite* humanChar5RestDown; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Sprite* humanChar6RestUp; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Sprite* humanChar6RestDown; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        float humanRestUpDuration; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float humanRestDownDuration; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        Vector2 firePosition; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Vector2 humanPosition; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Vector2 fireSize; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Vector2 humanSize; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Material* fireLightAdditiveMaterial; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        RectTransform* bgLayer; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        RectTransform* fireLayer; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        RectTransform* humanLayer; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        RectTransform* fireLightLayer; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        RectTransform* particleLayer; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        RectTransform* rect; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        Image* bgImage; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        int32_t bgFrameIdx; // 0x0130
        uint8_t pad_0131[0x3]; // 0x0131
        float bgTimer; // 0x0134
        uint8_t pad_0135[0x3]; // 0x0135
        Image* humanImage; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        int32_t humanFrameIdx; // 0x0140
        uint8_t pad_0141[0x3]; // 0x0141
        float humanTimer; // 0x0144
        uint8_t pad_0145[0x3]; // 0x0145
        Image* fireLightImage; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        int32_t fireLightFrameIdx; // 0x0150
        uint8_t pad_0151[0x3]; // 0x0151
        float fireLightTimer; // 0x0154
        uint8_t pad_0155[0x3]; // 0x0155
        Image* particleImage; // 0x0158
        uint8_t pad_0159[0x7]; // 0x0159
        int32_t particleFrameIdx; // 0x0160
        uint8_t pad_0161[0x3]; // 0x0161
        float particleTimer; // 0x0164
        uint8_t pad_0165[0x3]; // 0x0165
        Sprite[][] activeRestPair; // 0x0168
        uint8_t pad_0169[0x7]; // 0x0169
        int32_t twoPoseIdx; // 0x0170
        uint8_t pad_0171[0x3]; // 0x0171
        float twoPoseTimer; // 0x0174
        uint8_t pad_0175[0x3]; // 0x0175
        bool built; // 0x0178
    
        // Methods
        void Awake();  // RVA: 0x50BBD0
        void OnEnable();  // RVA: 0x50CA80
        void Build();  // RVA: 0x50BC30
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, Vector2 anchoredPos, bool raycast, bool fullFrame);  // RVA: 0x50C770
        void Update();  // RVA: 0x50CE70
        void SetSprites(Sprite* background, Sprite[][] fire, Sprite[][] human);  // RVA: 0x50CE30
        void ResolveActiveRestPair();  // RVA: 0x50CAE0
        void RefreshGenderTwoPose();  // RVA: 0x50CAD0
        void .ctor();  // RVA: 0x50D370
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<System.Int32> <>9__8_1;
    // static System.Action<System.Boolean> <>9__8_2;
    // static System.Action<System.Boolean> <>9__8_3;
    // static System.Action<System.Single> <>9__8_4;
    // static System.Action<System.Single> <>9__8_5;
    // static System.Action<System.Boolean> <>9__8_8;
    // static System.Action<System.Boolean> <>9__8_9;
    // static System.Action<System.Int32> <>9__8_10;
    // static UnityEngine.Events.UnityAction<System.Boolean> <>9__16_4;
    // static System.Action<System.Single> <>9__16_5;
    // static System.Action<System.Single> <>9__16_6;
    // static UnityEngine.Events.UnityAction<System.Boolean> <>9__24_1;
    // static UnityEngine.Events.UnityAction<System.Boolean> <>9__24_0;


    // Methods
    static void .cctor();  // RVA: 0x51A060
    void .ctor();  // RVA: 0x4BD420
    void <BuildSettingsPanel>b__8_1(int32_t index);  // RVA: 0x517FB0
    void <BuildSettingsPanel>b__8_2(bool on);  // RVA: 0x518100
    void <BuildSettingsPanel>b__8_3(bool on);  // RVA: 0x518150
    void <BuildSettingsPanel>b__8_4(float val);  // RVA: 0x5182A0
    void <BuildSettingsPanel>b__8_5(float val);  // RVA: 0x518370
    void <BuildSettingsPanel>b__8_8(bool on);  // RVA: 0x518440
    void <BuildSettingsPanel>b__8_9(bool on);  // RVA: 0x518450
    void <BuildSettingsPanel>b__8_10(int32_t idx);  // RVA: 0x517EE0
    void <WireSceneAuthoredPanel>b__16_4(bool on);  // RVA: 0x518450
    void <WireSceneAuthoredPanel>b__16_5(float v);  // RVA: 0x5184D0
    void <WireSceneAuthoredPanel>b__16_6(float v);  // RVA: 0x5185A0
    void <EnsureAlwaysBifidusToggle>b__24_1(bool on);  // RVA: 0x518490
    void <EnsureAlwaysBifidusToggle>b__24_0(bool on);  // RVA: 0x518490
};

// Namespace: <global>
class <>c__DisplayClass16_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TMP_Text* languageText; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TMP_Text* windowSizeText; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* vSyncToggleText; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TMP_Text* alwaysOnTopToggleText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Action* onClose; // 0x0030

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <WireSceneAuthoredPanel>b__0();  // RVA: 0x518F70
    void <WireSceneAuthoredPanel>b__1();  // RVA: 0x519430
    void <WireSceneAuthoredPanel>b__2();  // RVA: 0x5196E0
    void <WireSceneAuthoredPanel>b__3();  // RVA: 0x5199A0
    void <WireSceneAuthoredPanel>b__9(bool on);  // RVA: 0x519F30
    void <WireSceneAuthoredPanel>b__10(bool on);  // RVA: 0x519220
    void <WireSceneAuthoredPanel>b__7();  // RVA: 0x519C60
    void <WireSceneAuthoredPanel>b__8();  // RVA: 0x519C80
};

// Namespace: <global>
class <>c__DisplayClass21_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    String[][] opts; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t sel; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* labelRef; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <RewireGameSpeedDropdownListeners>b__0();  // RVA: 0x52B870
    void <RewireGameSpeedDropdownListeners>b__1();  // RVA: 0x52B9A0
};

// Namespace: <global>
class <>c__DisplayClass22_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Transform* existing; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    GameObject* container; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <EnsureAnalyticsToggle>b__1(bool on);  // RVA: 0x52BB60
    void <EnsureAnalyticsToggle>b__0(bool on);  // RVA: 0x52BAE0
};

// Namespace: <global>
class <>c__DisplayClass27_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    String[][] opts; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t sel; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* labelRef; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <RewireSectorDebugDropdownListeners>b__0();  // RVA: 0x52BBD0
    void <RewireSectorDebugDropdownListeners>b__1();  // RVA: 0x52BD40
};

// Namespace: <global>
class <>c__DisplayClass29_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TMP_Text* valueText; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Single> onChanged; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <BindVolumeSlider>b__0(float val);  // RVA: 0x52BEC0
};

// Namespace: <global>
class <>c__DisplayClass31_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t sel; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    String[][] opts; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* labelRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Int32> onChanged; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CreateDropdown>b__0();  // RVA: 0x52BFC0
    void <CreateDropdown>b__1();  // RVA: 0x52C050
};

// Namespace: <global>
class <>c__DisplayClass33_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TMP_Text* textRef; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Image* bgRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean> onChanged; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CreateToggle>b__0();  // RVA: 0x52C0E0
};

// Namespace: <global>
class <>c__DisplayClass34_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TMP_Text* valRef; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Single> onChanged; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CreateVolumeSlider>b__0(float val);  // RVA: 0x52C250
};

// Namespace: <global>
class <>c__DisplayClass35_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* onClick; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CreateActionButton>b__0();  // RVA: 0x5042D0
};

// Namespace: <global>
class <>c__DisplayClass36_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* onClick; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CreateCloseButton>b__0();  // RVA: 0x5042D0
};

// Namespace: <global>
class <>c__DisplayClass8_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.Int32> availableLangs; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Action* onClose; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <BuildSettingsPanel>b__0(int32_t pos);  // RVA: 0x52C470
    void <BuildSettingsPanel>b__11();  // RVA: 0x52C5A0
    void <BuildSettingsPanel>b__6();  // RVA: 0x52C850
    void <BuildSettingsPanel>b__7();  // RVA: 0x52C8F0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SettingsHelper
    {
    public:
        // Static fields
        // static String[][] LanguageNames;
        // static Il2CppString* PREF_LANGUAGE;
        // static Il2CppString* PREF_FPS_CAP;
        // static Il2CppString* PREF_VSYNC;
        // static Il2CppString* PREF_ALWAYS_ON_TOP;
        // static Il2CppString* PREF_WINDOW_SIZE;
        // static int32_t DEFAULT_WINDOW_SIZE;
        // static int32_t _langIndex;
        // static int32_t _winSizeIndex;
        // static int32_t _fpsIndex;
        // static String[][] WindowSizeLabels;
        // static String[][] FpsLabels;
        // static Int32[][] FpsValues;
        // static Int32[][] GameSpeedValues;
    
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x516570
        static GameObject* BuildSettingsPanel(Canvas* rootCanvas, Action* onClose);  // RVA: 0x50E090
        static void ApplyPersistedSettings();  // RVA: 0x50D810
        static void WireSceneAuthoredPanel(Button* languageLeftButton, Button* languageRightButton, TMP_Text* languageText, Button* windowSizeLeftButton, Button* windowSizeRightButton, TMP_Text* windowSizeText, Button* framerateLeftButton, Button* framerateRightButton, TMP_Text* framerateText, Toggle* vSyncToggle, TMP_Text* vSyncToggleText, Toggle* alwaysOnTopToggle, TMP_Text* alwaysOnTopToggleText, Toggle* fastPvPToggle, Slider* musicVolumeSlider, Slider* sfxVolumeSlider, TMP_Text* musicVolumeValueText, TMP_Text* sfxVolumeValueText, Button* closeButton, Button* debugAddItemsButton, Action* onClose);  // RVA: 0x516700
        static void RefreshSceneAuthoredPanelValues(TMP_Text* languageText, TMP_Text* windowSizeText, TMP_Text* framerateText, Toggle* vSyncToggle, TMP_Text* vSyncToggleText, Toggle* alwaysOnTopToggle, TMP_Text* alwaysOnTopToggleText, Toggle* fastPvPToggle, Slider* musicVolumeSlider, Slider* sfxVolumeSlider, TMP_Text* musicVolumeValueText, TMP_Text* sfxVolumeValueText);  // RVA: 0x5154B0
        static void EnsureSectorDebugDropdown(RectTransform* innerSettings);  // RVA: 0x514E00
        static void EnsureGameSpeedDropdown(RectTransform* innerSettings);  // RVA: 0x5145C0
        static void RewireGameSpeedDropdownListeners(Transform* container, String[][] options, int32_t initialIdx);  // RVA: 0x515F90
        static void EnsureAnalyticsToggle(RectTransform* innerSettings);  // RVA: 0x513B00
        static void UpdateAnalyticsToggleText(Transform* analyticsToggleRoot, bool isOn);  // RVA: 0x5165D0
        static void EnsureAlwaysBifidusToggle(RectTransform* innerSettings);  // RVA: 0x512FD0
        static void ApplyDebugVisibilityToScenePanel(RectTransform* innerSettings, Toggle* fastPvPToggle, Button* debugAddItemsButton);  // RVA: 0x50D470
        static void RemoveLegacyDebugResetButtons(RectTransform* innerSettings);  // RVA: 0x515E20
        static void RewireSectorDebugDropdownListeners(Transform* container, String[][] options, int32_t initialIdx);  // RVA: 0x516280
        static String[][] BuildSectorOptions();  // RVA: 0x50DD60
        static void BindVolumeSlider(Slider* slider, TMP_Text* valueText, float initialValue, System.Action<System.Single> onChanged);  // RVA: 0x50DB20
        static void CreateSectionTitle(Transform* parent, Il2CppString* title, float yOffset);  // RVA: 0x511470
        static void CreateDropdown(Transform* parent, String[][] options, int32_t currentIndex, float yOffset, System.Action<System.Int32> onChanged);  // RVA: 0x510E90
        static GameObject* CreateArrowButton(Transform* parent, Il2CppString* arrow, Vector2 pos, bool isLeft);  // RVA: 0x510460
        static void CreateToggle(Transform* parent, Il2CppString* label, bool initialValue, float yOffset, System.Action<System.Boolean> onChanged);  // RVA: 0x511790
        static void CreateVolumeSlider(Transform* parent, Il2CppString* label, float yOffset, float initialValue, System.Action<System.Single> onChanged);  // RVA: 0x512080
        static void CreateActionButton(Transform* parent, Il2CppString* label, float yOffset, Color bgColor, Action* onClick);  // RVA: 0x50FF60
        static void CreateCloseButton(Transform* parent, float yOffset, Action* onClick);  // RVA: 0x510940
        static TMP_Text* CreateText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions anchor, Vector2 pos, Vector2 size);  // RVA: 0x511550
        static void .cctor();  // RVA: 0x5179B0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static UnityEngine.Events.UnityAction<System.Boolean> <>9__53_0;


    // Methods
    static void .cctor();  // RVA: 0x52C910
    void .ctor();  // RVA: 0x4BD420
    void <Start>b__53_0(bool on);  // RVA: 0x52B670
};

// Namespace: <global>
class <>c__DisplayClass55_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* locKey; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    Il2CppString* <AttachActionTooltip>b__0();  // RVA: 0x52C310
};

// Namespace: <global>
class <>c__DisplayClass81_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>> friendSnapshots; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <FetchAndPopulateFriends>b__0(System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>> result);  // RVA: 0x5042C0
};

// Namespace: <global>
class <>c__DisplayClass82_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SharedSettingsBarUI* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    PlayerSnapshot* capturedSnapshot; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CreateFriendRow>b__1();  // RVA: 0x52C370
};

// Namespace: <global>
class <>c__DisplayClass82_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerSnapshot* captured; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    Il2CppString* <CreateFriendRow>b__0();  // RVA: 0x52C3A0
};

// Namespace: <global>
class <FetchAndPopulateFriends>d__81
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    SharedSettingsBarUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass81_0* <>8__1; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    TMP_Text* <statusText>5__2; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Transform* <contentTransform>5__3; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x52A990
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x52B370
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SharedSettingsBarUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static bool <DebugVisible>k__BackingField;
        // static Action* OnDebugVisibilityChanged;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Button* settingsToggleButton; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* settingsOpenSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* settingsClosedSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* settingsBar; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Button* settingsQuitButton; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* surveyPopUp; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Il2CppString* surveyUrl; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Button* surveyYesButton; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Button* surveyNoButton; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Button* settingsOptionsButton; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Button* settingsStatsButton; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Button* settingsScaleButton; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Toggle* audioToggle; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameObject* resetConfirmPanelRoot; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        TMP_Text* resetConfirmQuestionText; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Button* resetConfirmYesButton; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Button* resetConfirmNoButton; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* settingsPanelRoot; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Button* languageLeftButton; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Button* languageRightButton; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        TMP_Text* languageText; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Button* windowSizeLeftButton; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Button* windowSizeRightButton; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        TMP_Text* windowSizeText; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Button* framerateLeftButton; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Button* framerateRightButton; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        TMP_Text* framerateText; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        Toggle* vSyncToggle; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        TMP_Text* vSyncToggleText; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        Toggle* alwaysOnTopToggle; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        TMP_Text* alwaysOnTopToggleText; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        Toggle* fastPvPToggle; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        Slider* musicVolumeSlider; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        Slider* sfxVolumeSlider; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        TMP_Text* musicVolumeValueText; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        TMP_Text* sfxVolumeValueText; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        Button* settingsCloseButton; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        Button* debugAddItemsButton; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        Button* challengeFriendButton; // 0x0150
        uint8_t pad_0151[0x7]; // 0x0151
        GameObject* settingsPanel; // 0x0158
        uint8_t pad_0159[0x7]; // 0x0159
        GameObject* resetConfirmPanel; // 0x0160
        uint8_t pad_0161[0x7]; // 0x0161
        bool settingsControlsBound; // 0x0168
        bool settingsBarOpen; // 0x0169
        uint8_t pad_016A[0x6]; // 0x016A
        LeaderboardUI* leaderboardUI; // 0x0170
        uint8_t pad_0171[0x7]; // 0x0171
        Vector2 defaultBarPos; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        Vector2 defaultBtnPos; // 0x0180
        uint8_t pad_0181[0x7]; // 0x0181
        GameObject* friendListPanel; // 0x0188
        uint8_t pad_0189[0x7]; // 0x0189
        GameObject* friendRowTemplate; // 0x0190
        uint8_t pad_0191[0x7]; // 0x0191
        Coroutine* friendFetchCoroutine; // 0x0198
    
        // Methods
        static bool get_DebugVisible();  // RVA: 0x51EA80
        static void set_DebugVisible(bool value);  // RVA: 0x51EB80
        static void add_OnDebugVisibilityChanged(Action* value);  // RVA: 0x51E9C0
        static void remove_OnDebugVisibilityChanged(Action* value);  // RVA: 0x51EAC0
        void Start();  // RVA: 0x51D4A0
        void Update();  // RVA: 0x51E650
        static void AttachActionTooltip(Button* btn, Il2CppString* locKey);  // RVA: 0x51A1C0
        void UpdateButtonsForScreen(GameScreen screen);  // RVA: 0x51E320
        void OnDestroy();  // RVA: 0x51C920
        void ToggleSettingsBar();  // RVA: 0x51DCC0
        void UpdateToggleIcon();  // RVA: 0x51E570
        void ToggleSettingsPanel();  // RVA: 0x51DE40
        void DismissSettingsPanel();  // RVA: 0x51C410
        void BindSettingsPanelControls();  // RVA: 0x51A360
        void CollapseSettingsBar();  // RVA: 0x51B6E0
        void OnQuitClicked();  // RVA: 0x51CAD0
        void OnSurveyYes();  // RVA: 0x51D000
        void OnSurveyNo();  // RVA: 0x51CFC0
        static void QuitApp();  // RVA: 0x51CFC0
        void OnLeaderboardClicked();  // RVA: 0x51C9F0
        void CloseBar();  // RVA: 0x51B640
        void DismissResetConfirmPopup();  // RVA: 0x51C2E0
        void OnResetCharacterClicked();  // RVA: 0x51CC10
        GameObject* BuildResetConfirmPopup();  // RVA: 0x51A960
        static Button* CreatePopupButton(Transform* parent, Il2CppString* label, TMP_FontAsset* font, Color tint, Vector2 anchoredPos);  // RVA: 0x51BCA0
        void EnsureResetCharacterButtonInSettings();  // RVA: 0x51C540
        void OpenFriendListPanel();  // RVA: 0x51D090
        void DismissFriendListPanel();  // RVA: 0x51C220
        void ClearFriendListContent();  // RVA: 0x51B3C0
        IEnumerator* FetchAndPopulateFriends();  // RVA: 0x51C660
        void CreateFriendRow(Transform* parent, Il2CppString* friendName, PlayerSnapshot* snapshot, TMP_FontAsset* font);  // RVA: 0x51B770
        void OnChallengeFriendClicked(PlayerSnapshot* friendSnapshot);  // RVA: 0x51C6D0
        void .ctor();  // RVA: 0x51E940
        Il2CppString* <Start>b__53_1();  // RVA: 0x51E250
        void <OnResetCharacterClicked>b__71_0();  // RVA: 0x51E180
        void <BuildResetConfirmPopup>b__72_0();  // RVA: 0x51E090
        void <EnsureResetCharacterButtonInSettings>b__77_0();  // RVA: 0x51E160
    };

    // Namespace: AutoBattle.UI
    class SidePanelController : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float panelWidthCanvas; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float verticalOverflowPx; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        CanvasScaler* canvasScaler; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool useVerticalAlignment; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float panelHeightCanvas; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        Image* backgroundImage; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        RectTransform* innerPanelTransform; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        float innerPanelTopY; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float innerPanelBottomY; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        RectTransform* rectTransform; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        bool isOpen; // 0x0058
    
        // Methods
        bool get_IsOpen();  // RVA: 0x51F930
        void Awake();  // RVA: 0x51EC70
        void Toggle();  // RVA: 0x51F8B0
        void Open();  // RVA: 0x51F620
        void Open(bool forceRight);  // RVA: 0x51F4E0
        void Close();  // RVA: 0x51F4A0
        void ChooseSide();  // RVA: 0x51ECE0
        Il2CppString* ChooseVerticalAlignment(Vector3[][] corners);  // RVA: 0x51EEE0
        void ApplyInnerPanelOffset(bool isTop);  // RVA: 0x51EBC0
        void SetLeftSide();  // RVA: 0x51F670
        void SetRightSide();  // RVA: 0x51F790
        void .ctor();  // RVA: 0x51F910
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <AnimateIcon>d__26
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float fps; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    SlotButtonUI* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t <frameIndex>5__2; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <delay>5__3; // 0x0034

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x52A5F0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x52A760
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <AnimateSynergyFrame>d__27
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    SlotButtonUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x52A7A0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x52A950
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SlotButtonUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* equippedBG; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* icon; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Image* rarityFrame; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* elementDot; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* slotLabel; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite* elementFire; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Sprite* elementIce; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite* elementHoly; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Sprite* elementArcane; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Sprite* elementShadow; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite* rarityFrameSprite; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Sprite* equippedFrameSprite; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Sprite[][] synergyFrameSprites; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        float synergyFrameFps; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Sprite[][] iconAnimFrames; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Coroutine* iconAnimCoroutine; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Coroutine* synergyAnimCoroutine; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* selectionFrame; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        GameObject* newBadge; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        GameObject* unequipGO; // 0x00B8
    
        // Methods
        Button* get_UnequipButton();  // RVA: 0x5204A0
        void SetSlotSelected(bool selected);  // RVA: 0x51FB80
        void Setup(Il2CppString* slotDisplayName, ItemData* itemData, ItemInstance* itemInstance, bool hasNewForSlot, bool hasSynergy, Color synergyColor);  // RVA: 0x51FC10
        void RefreshNewBadge(bool shouldShow);  // RVA: 0x51FAF0
        Sprite* GetElementSprite(ElementCategory category);  // RVA: 0x51FA30
        IEnumerator* AnimateIcon(float fps);  // RVA: 0x51F940
        IEnumerator* AnimateSynergyFrame();  // RVA: 0x51F9C0
        void OnDisable();  // RVA: 0x51FA70
        void .ctor();  // RVA: 0x520480
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct Attack2Mode
{
public:
    // Static fields
    // static Attack2Mode Standard;
    // static Attack2Mode RightAbove;
    // static Attack2Mode RandomBoth;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <LungeOnlyCoroutine>d__146
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    SpriteAnimator* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float holdDuration; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x52B3B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x52B4A0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SpriteAnimator : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* targetImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite[][] frames; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float frameRate; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t currentFrame; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float timer; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        bool isPlaying; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        Sprite[][] idleFrames; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite[][] attackFrames; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Sprite[][] attack2Frames; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite[][] attack3Frames; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        bool isAttacking; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        int32_t attackFrame; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float attackTimer; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float attackFrameRate; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        bool attackAnimationsEnabled; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Sprite[][] hitFrames; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        bool isHit; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        int32_t hitFrame; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        float hitTimer; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        float hitFrameRate; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        Sprite[][] deathFrames; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        bool isDying; // 0x0098
        uint8_t pad_0099[0x3]; // 0x0099
        int32_t deathFrame; // 0x009C
        uint8_t pad_009D[0x3]; // 0x009D
        float deathTimer; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float deathFrameRate; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        Image* slashImage; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Sprite[][] slashFrames; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Sprite[][] slashSottoFrames; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Sprite[][] slashSopraFrames; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Sprite[][] slashAttack3Frames; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Sprite[][] slashRightAboveFrames; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Sprite[][] slashMagicFrames; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        int32_t slashFrame; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        bool slashPlaying; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        float slashTimer; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        float slashFrameRate; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        bool queueSlashSopra; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        int32_t currentAttackVariant; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        int32_t slashStartFrame; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        bool slashWaitingForFrame; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        float slashStartDelay; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        float slashDelayTimer; // 0x0104
        uint8_t pad_0105[0x3]; // 0x0105
        bool slashDelayActive; // 0x0108
        bool keepWeaponVisibleDuringAttack; // 0x0109
        uint8_t pad_010A[0x2]; // 0x010A
        int32_t weaponReappearFrame; // 0x010C
        uint8_t pad_010D[0x3]; // 0x010D
        int32_t weaponReappearFrameAtk3; // 0x0110
        uint8_t pad_0111[0x3]; // 0x0111
        Vector2 slashSottoPos; // 0x0114
        uint8_t pad_0115[0x7]; // 0x0115
        Vector2 slashSopraPos; // 0x011C
        uint8_t pad_011D[0x7]; // 0x011D
        bool hasSlashPositions; // 0x0124
        uint8_t pad_0125[0x3]; // 0x0125
        Attack2Mode currentAttack2Mode; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        bool atk2UseRightAbove; // 0x012C
        uint8_t pad_012D[0x3]; // 0x012D
        Vector2 slashRightAbovePos; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        Vector2 slashRangedPos; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        float slashRangedScale; // 0x0140
        uint8_t pad_0141[0x3]; // 0x0141
        Color slashStandardColor; // 0x0144
        uint8_t pad_0145[0xF]; // 0x0145
        Color slashRightAboveColor; // 0x0154
        uint8_t pad_0155[0xF]; // 0x0155
        Vector2 slashAttack3Pos; // 0x0164
        uint8_t pad_0165[0x7]; // 0x0165
        Vector2 slashAttack3SizeOverride; // 0x016C
        uint8_t pad_016D[0x7]; // 0x016D
        int32_t slashStartFrameAtk3; // 0x0174
        uint8_t pad_0175[0x3]; // 0x0175
        Transform* slashAttack3UpperSibling; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        Vector2 slashDefaultSize; // 0x0180
        uint8_t pad_0181[0x7]; // 0x0181
        bool hasSlashDefaultSize; // 0x0188
        uint8_t pad_0189[0x3]; // 0x0189
        Vector2 idleRectSize; // 0x018C
        uint8_t pad_018D[0x7]; // 0x018D
        Vector2 idleAnchoredPos; // 0x0194
        uint8_t pad_0195[0x7]; // 0x0195
        bool hasIdleRectSize; // 0x019C
        uint8_t pad_019D[0x3]; // 0x019D
        float idleSpriteHeight; // 0x01A0
        uint8_t pad_01A1[0x3]; // 0x01A1
        float idleBottomMarginPx; // 0x01A4
        uint8_t pad_01A5[0x3]; // 0x01A5
        float attackBottomMarginPx; // 0x01A8
        uint8_t pad_01A9[0x3]; // 0x01A9
        float idleContentCenterXPx; // 0x01AC
        uint8_t pad_01AD[0x3]; // 0x01AD
        float attackContentCenterXPx; // 0x01B0
        uint8_t pad_01B1[0x3]; // 0x01B1
        float idleFrameWidth; // 0x01B4
        uint8_t pad_01B5[0x3]; // 0x01B5
        float attackFrameWidth; // 0x01B8
        uint8_t pad_01B9[0x3]; // 0x01B9
        bool mirrorXCompensation; // 0x01BC
        uint8_t pad_01BD[0x3]; // 0x01BD
        Transform* lungeTarget; // 0x01C0
        uint8_t pad_01C1[0x7]; // 0x01C1
        float lungeDistancePx; // 0x01C8
        uint8_t pad_01C9[0x3]; // 0x01C9
        int32_t lungeStartFrameAtk3; // 0x01CC
        uint8_t pad_01CD[0x3]; // 0x01CD
        int32_t lungeEndFrameAtk3; // 0x01D0
        uint8_t pad_01D1[0x3]; // 0x01D1
        int32_t lungeStartFrameAtk2; // 0x01D4
        uint8_t pad_01D5[0x3]; // 0x01D5
        int32_t lungeEndFrameAtk2; // 0x01D8
        uint8_t pad_01D9[0x3]; // 0x01D9
        bool lungeActive; // 0x01DC
        uint8_t pad_01DD[0x3]; // 0x01DD
        Vector2 lungeOriginalPos; // 0x01E0
        uint8_t pad_01E1[0x7]; // 0x01E1
        bool suppressLungeThisAttack; // 0x01E8
        bool rangedAttackThisTurn; // 0x01E9
        uint8_t pad_01EA[0x6]; // 0x01EA
        Coroutine* lungeOnlyCoroutine; // 0x01F0
        uint8_t pad_01F1[0x7]; // 0x01F1
        EquipOverlayController* overlayController; // 0x01F8
        uint8_t pad_01F9[0x7]; // 0x01F9
        Action* OnAttackComplete; // 0x0200
        uint8_t pad_0201[0x7]; // 0x0201
        Action* OnHitComplete; // 0x0208
        uint8_t pad_0209[0x7]; // 0x0209
        Action* OnDeathComplete; // 0x0210
        uint8_t pad_0211[0x7]; // 0x0211
        bool useNativeSize; // 0x0218
    
        // Methods
        int32_t get_CurrentAttackVariant();  // RVA: 0x524430
        void add_OnAttackComplete(Action* value);  // RVA: 0x524220
        void remove_OnAttackComplete(Action* value);  // RVA: 0x5244C0
        void add_OnHitComplete(Action* value);  // RVA: 0x524380
        void remove_OnHitComplete(Action* value);  // RVA: 0x524620
        void add_OnDeathComplete(Action* value);  // RVA: 0x5242D0
        void remove_OnDeathComplete(Action* value);  // RVA: 0x524570
        int32_t get_CurrentFrame();  // RVA: 0x524440
        int32_t get_FrameCount();  // RVA: 0x524470
        bool get_IsAttacking();  // RVA: 0x524490
        bool get_IsHit();  // RVA: 0x5244B0
        bool get_IsDying();  // RVA: 0x5244A0
        void SetFrames(Sprite[][] newFrames);  // RVA: 0x522530
        void ResetAnimationStateForNewEntity();  // RVA: 0x521C10
        void SetAttackFrames(Sprite[][] newAttackFrames);  // RVA: 0x5224B0
        void SetAttack2Frames(Sprite[][] newAttack2Frames);  // RVA: 0x522450
        void SetAttack3Frames(Sprite[][] newAttack3Frames);  // RVA: 0x522470
        void SetAttackAnimationsEnabled(bool enabled);  // RVA: 0x522480
        void SetHitFrames(Sprite[][] newHitFrames);  // RVA: 0x522740
        void SetDeathFrames(Sprite[][] newDeathFrames);  // RVA: 0x5224F0
        void SetSlashOverlay(Image* slashImg, Sprite[][] slashSpriteFrames);  // RVA: 0x522910
        void SetSlashSopraFrames(Sprite[][] sopraFrames);  // RVA: 0x522A50
        void SetSlashAttack3Frames(Sprite[][] atk3SlashFrames);  // RVA: 0x522800
        void SetSlashRightAboveFrames(Sprite[][] rightAboveFrames);  // RVA: 0x522A20
        void SetSlashMagicFrames(Sprite[][] magicFrames);  // RVA: 0x5228F0
        void SetSlashRangedPosition(Vector2 pos);  // RVA: 0x522A10
        void SetAttack2Mode(Attack2Mode mode);  // RVA: 0x522460
        void SetSlashRightAbovePosition(Vector2 pos);  // RVA: 0x522A40
        void SetSlashColors(Color standardColor, Color rightAboveColor);  // RVA: 0x5228D0
        void SetSlashAttack3Layout(Vector2 pos, Vector2 sizeOverride, int32_t startFrame);  // RVA: 0x522890
        void SetSlashAttack3UpperSibling(Transform* upperBound);  // RVA: 0x5228B0
        void SetSlashPositions(Vector2 sottoPos, Vector2 sopraPos);  // RVA: 0x5229F0
        void SetSlashStartDelay(float seconds);  // RVA: 0x522A70
        void SetKeepWeaponVisibleDuringAttack(bool keep);  // RVA: 0x522750
        void ResizeSlashToPlayerPixelScale();  // RVA: 0x522130
        void CollectMaxBounds(Sprite[][] arr, float maxW, float maxH);  // RVA: 0x520C40
        void SetOverlayController(EquipOverlayController* controller);  // RVA: 0x5227E0
        void PlayAttack(bool suppressLunge, bool rangedAttack);  // RVA: 0x520F70
        void PlayHit();  // RVA: 0x5217D0
        void PlayDeath();  // RVA: 0x5215A0
        void AdjustRectForDeath(Sprite* deathSprite);  // RVA: 0x520820
        void ResetDeath();  // RVA: 0x522060
        void AdjustRectForAnimation(Sprite* animSprite);  // RVA: 0x520540
        void RestoreIdleRect();  // RVA: 0x522320
        void ForceRestoreIdleRect();  // RVA: 0x520E00
        void SetTargetImage(Image* img);  // RVA: 0x4AE850
        void SetFrameRate(float fps);  // RVA: 0x522510
        void SetAttackFrameRate(float fps);  // RVA: 0x522490
        void SetLungeParams(Transform* target, float distancePx, int32_t atk3Start, int32_t atk3End, int32_t atk2Start, int32_t atk2End);  // RVA: 0x522760
        void PlayLungeOnly(float holdDuration);  // RVA: 0x5219A0
        IEnumerator* LungeOnlyCoroutine(float holdDuration);  // RVA: 0x520EF0
        void ApplyLunge();  // RVA: 0x520A10
        void ReleaseLunge();  // RVA: 0x521AC0
        void SetAnimationMargins(float idleBottomPx, float attackBottomPx, float idleCenterX, float attackCenterX, float idleFrameW, float attackFrameW);  // RVA: 0x522400
        void SetMirrorXCompensation(bool mirror);  // RVA: 0x5227D0
        void SetHitFrameRate(float fps);  // RVA: 0x522720
        void SetUseNativeSize(bool value);  // RVA: 0x522BB0
        void SetStaticSprite(Sprite* sprite);  // RVA: 0x522A90
        void Stop();  // RVA: 0x522D70
        void Play();  // RVA: 0x521AB0
        void UpdateSlashOverlay();  // RVA: 0x522D80
        void StartSlashSopra();  // RVA: 0x522BC0
        void Update();  // RVA: 0x523070
        void .ctor();  // RVA: 0x524110
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <PlayLoop>d__6
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    SpriteLoopAnimator* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x52B4E0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x52B630
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SpriteLoopAnimator : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* targetImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite[][] frames; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float fps; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Coroutine* animCoroutine; // 0x0038
    
        // Methods
        void OnEnable();  // RVA: 0x524710
        void OnDisable();  // RVA: 0x5246D0
        IEnumerator* PlayLoop();  // RVA: 0x524880
        void .ctor();  // RVA: 0x4A9A40
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class StatRow
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TMP_Text* labelText; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TMP_Text* pointsText; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* totPointsText; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Button* buttonLeft; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Button* buttonRight; // 0x0030

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class <>c__DisplayClass20_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t idx; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    StatsAllocationUI* <>4__this; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <Start>b__0();  // RVA: 0x52B740
    void <Start>b__1();  // RVA: 0x52B810
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class StatsAllocationUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static int32_t IDX_HP;
        // static int32_t IDX_ATK;
        // static int32_t IDX_DEF;
        // static int32_t IDX_CRIT;
        // static int32_t IDX_PARRY;
        // static String[][] StatLabels;
    
        uint8_t pad_0000[0x20]; // 0x0000
        float atkPerPoint; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float hpPerPoint; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float defPerPoint; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float critPercentPerPoint; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float parryPercentPerPoint; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* panelRoot; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* creditsText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Button* powerUpButton; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        StatRow[][] statRows; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        EquipScreenUI* equipScreenUI; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Int32[][] pendingPoints; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        bool openedBeforeStart; // 0x0068
    
        // Methods
        void Awake();  // RVA: 0x5259B0
        void Start();  // RVA: 0x526AC0
        Il2CppString* GetCreditValueString(int32_t idx);  // RVA: 0x525C20
        Il2CppString* GetPointsScoreString(int32_t idx, int32_t totalPoints);  // RVA: 0x525D60
        bool get_IsOpen();  // RVA: 0x527590
        void Open();  // RVA: 0x526390
        void Close();  // RVA: 0x525A70
        void ApplySideMirroring();  // RVA: 0x525730
        void OnRightClick(int32_t idx);  // RVA: 0x5262C0
        void OnLeftClick(int32_t idx);  // RVA: 0x525EE0
        void OnPowerUpClicked();  // RVA: 0x525F40
        static int32_t GetAllocated(PlayerState* ps, int32_t idx);  // RVA: 0x525BA0
        void RefreshUI();  // RVA: 0x526590
        void PushPreviewToEquipScreen();  // RVA: 0x5264B0
        void .ctor();  // RVA: 0x5274E0
        static void .cctor();  // RVA: 0x527390
    };

    // Namespace: AutoBattle.UI
    class StatTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* tooltipText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* tooltipPanel; // 0x0028
    
        // Methods
        void SetTooltipText(Il2CppString* text);  // RVA: 0x525630
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x5252C0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x5252B0
        void OnDisable();  // RVA: 0x5252B0
        void HideTooltip();  // RVA: 0x525210
        GameObject* CreateTooltipPanel();  // RVA: 0x524D20
        static TMP_Text* FindTooltipText(GameObject* panel);  // RVA: 0x5250C0
        static GameObject* BuildDefaultPanel(Transform* parent);  // RVA: 0x5248F0
        void PositionTooltip(RectTransform* panelRect, Canvas* rootCanvas);  // RVA: 0x525370
        void .ctor();  // RVA: 0x5256E0
    };

    // Namespace: AutoBattle.UI
    class TextCtrl : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_Text* targetText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Color normalColor; // 0x0028
        uint8_t pad_0029[0xF]; // 0x0029
        Color highlightedColor; // 0x0038
        uint8_t pad_0039[0xF]; // 0x0039
        Color pressedColor; // 0x0048
        uint8_t pad_0049[0xF]; // 0x0049
        Color selectedColor; // 0x0058
        uint8_t pad_0059[0xF]; // 0x0059
        Color disabledColor; // 0x0068
        uint8_t pad_0069[0xF]; // 0x0069
        float fadeDuration; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Button* button; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        bool isPointerInside; // 0x0088
        bool isPointerDown; // 0x0089
        bool isSelected; // 0x008A
        bool wasInteractable; // 0x008B
        Color currentColor; // 0x008C
        uint8_t pad_008D[0xF]; // 0x008D
        Color targetColor; // 0x009C
        uint8_t pad_009D[0xF]; // 0x009D
        float lerpTimer; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        bool isLerping; // 0x00B0
    
        // Methods
        void Awake();  // RVA: 0x528710
        void OnEnable();  // RVA: 0x5289F0
        void Update();  // RVA: 0x5291D0
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x528CF0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x528E20
        void OnPointerDown(PointerEventData* eventData);  // RVA: 0x528BB0
        void OnPointerUp(PointerEventData* eventData);  // RVA: 0x528F50
        void OnSelect(BaseEventData* eventData);  // RVA: 0x529010
        void OnDeselect(BaseEventData* eventData);  // RVA: 0x5288C0
        Color EvaluateTargetColor();  // RVA: 0x5287D0
        void TransitionToColor(Color color);  // RVA: 0x529140
        void ApplyColor(Color color);  // RVA: 0x528670
        void .ctor();  // RVA: 0x528620
    };

    // Namespace: AutoBattle.UI
    class TextCtrlToggle : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_Text* targetText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Color normalColor; // 0x0028
        uint8_t pad_0029[0xF]; // 0x0029
        Color highlightedColor; // 0x0038
        uint8_t pad_0039[0xF]; // 0x0039
        Color pressedColor; // 0x0048
        uint8_t pad_0049[0xF]; // 0x0049
        Color selectedColor; // 0x0058
        uint8_t pad_0059[0xF]; // 0x0059
        Color disabledColor; // 0x0068
        uint8_t pad_0069[0xF]; // 0x0069
        float fadeDuration; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Toggle* toggle; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        bool isPointerInside; // 0x0088
        bool isPointerDown; // 0x0089
        bool wasInteractable; // 0x008A
        bool wasOn; // 0x008B
        Color currentColor; // 0x008C
        uint8_t pad_008D[0xF]; // 0x008D
        Color targetColor; // 0x009C
        uint8_t pad_009D[0xF]; // 0x009D
        float lerpTimer; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        bool isLerping; // 0x00B0
    
        // Methods
        void Awake();  // RVA: 0x5276B0
        void OnEnable();  // RVA: 0x527970
        void OnDisable();  // RVA: 0x527880
        void Update();  // RVA: 0x528260
        void OnToggleValueChanged(bool isOn);  // RVA: 0x528130
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x527D90
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x527F00
        void OnPointerDown(PointerEventData* eventData);  // RVA: 0x527C10
        void OnPointerUp(PointerEventData* eventData);  // RVA: 0x528070
        Color EvaluateTargetColor();  // RVA: 0x527770
        void TransitionToColor(Color color);  // RVA: 0x5281D0
        void ApplyColor(Color color);  // RVA: 0x527610
        void .ctor();  // RVA: 0x528620
    };

    // Namespace: AutoBattle.UI
    class TextOutline : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Color outlineColor; // 0x0020
        uint8_t pad_0021[0xF]; // 0x0021
        float outlineThickness; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t outlineDirections; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        TMP_Text* tmpText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool meshNeedsUpdate; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        Color cachedColor; // 0x0044
        uint8_t pad_0045[0xF]; // 0x0045
        float cachedThickness; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        int32_t cachedDirections; // 0x0058
    
        // Methods
        void Awake();  // RVA: 0x529E60
        void OnEnable();  // RVA: 0x52A400
        void OnDisable();  // RVA: 0x52A2D0
        void OnTextChanged(Il2CppObject* obj);  // RVA: 0x52A550
        void LateUpdate();  // RVA: 0x52A110
        void CacheSettings();  // RVA: 0x52A070
        void ApplyOutline();  // RVA: 0x529560
        Vector2[][] BuildOffsets();  // RVA: 0x529EB0
        static int32_t CountUsedTriangleIndices(Int32[][] triangles, int32_t maxVertIndex);  // RVA: 0x52A090
        static void EnsureArraySize(T[][] array, int32_t minSize);  // RVA: 0x2B8640
        void .ctor();  // RVA: 0x52A5C0
    };

    // Namespace: AutoBattle.UI
    class UIButtonSound : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        bool playClick; // 0x0020
        bool playHover; // 0x0021
    
        // Methods
        void OnPointerClick(PointerEventData* eventData);  // RVA: 0x52C980
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x52CA50
        void .ctor();  // RVA: 0x52CB20
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <Play>d__10
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    UIFlipbookAnimator* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <idx>5__3; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    int32_t <count>5__4; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53C070
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53C280
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class UIFlipbookAnimator : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite[][] frames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float fps; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool loop; // 0x002C
        bool useUnscaledTime; // 0x002D
        uint8_t pad_002E[0x2]; // 0x002E
        Image* image; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Coroutine* playRoutine; // 0x0038
    
        // Methods
        void Awake();  // RVA: 0x52CB30
        void OnEnable();  // RVA: 0x52CB80
        void OnDisable();  // RVA: 0x5246D0
        void SetFrames(Sprite[][] newFrames, float newFps);  // RVA: 0x52CD10
        IEnumerator* Play();  // RVA: 0x52CCA0
        void .ctor();  // RVA: 0x52CDC0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct NotificationType
{
public:
    // Static fields
    // static NotificationType LevelUp;
    // static NotificationType ItemDrop;
    // static NotificationType CraftOk;
    // static NotificationType SectorClear;
    // static NotificationType Death;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class UIManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* creationScreen; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* homeScreen; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* equipScreen; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* inventoryScreen; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        GameObject* battleScreen; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* worldHomeScreen; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        GameObject* worldBattleScreen; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        GameObject* sharedSettingsBar; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        GameObject* notificationPrefab; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Transform* notificationParent; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        ForgeScreenUI* forgeScreenUI; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        SidePanelController* equipSidePanel; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        SidePanelController* inventorySidePanel; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameScreen currentScreen; // 0x0088
    
        // Methods
        void Start();  // RVA: 0x53FB00
        void OnDisable();  // RVA: 0x53F190
        void ShowScreen(GameScreen screen);  // RVA: 0x53F4D0
        void ShowNotification(Il2CppString* message, NotificationType type);  // RVA: 0x53F330
        void HandleScreenChange(GameScreen screen);  // RVA: 0x53F180
        void HandleNotification(Il2CppString* message, Il2CppString* notifType);  // RVA: 0x53EF80
        void .ctor();  // RVA: 0x53FDA0
    };

    // Namespace: AutoBattle.UI
    class UITemplate : public MonoBehaviour
    {
    public:
        // Static fields
        // static System.Collections.Generic.Dictionary<System.String,AutoBattle.UI.UITemplate> registry;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* templateKey; // 0x0020
    
        // Methods
        static void RebuildRegistry();  // RVA: 0x540140
        static GameObject* Clone(Il2CppString* key, Transform* parent);  // RVA: 0x53FDC0
        static bool HasTemplate(Il2CppString* key);  // RVA: 0x53FFF0
        static void InvalidateRegistry();  // RVA: 0x5400F0
        void .ctor();  // RVA: 0x4E82E0
    };

    // Namespace: AutoBattle.UI
    class VillageBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* backgroundSprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* luceFinestraSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* livelloSopraSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite* cornicheFinestraSprite; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Sprite[][] ominoSfondoFrames; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite[][] ominoFinestraFrames; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        float ominoSfondoFrameRate; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float ominoSfondoWalkSpeed; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float ominoSfondoBaseY; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float ominoSfondoRespawnMin; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float ominoSfondoRespawnMax; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float ominoSfondoYJitter; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        bool ominoSfondoWalksRight; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float ominoFinestraFrameRate; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float ominoFinestraSpeed; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float ominoFinestraMinX; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float ominoFinestraMaxX; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float ominoFinestraBaseY; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        bool ominoFinestraFlipOnTurn; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        float pixelScale; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        RectTransform* backgroundLayer; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        RectTransform* ominoSfondoLayer; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        RectTransform* luceFinestraLayer; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        RectTransform* ominoFinestraLayer; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        RectTransform* livelloSopraLayer; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        RectTransform* corniceFinestraLayer; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        RectTransform* rect; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Image* ominoSfondoImage; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        int32_t ominoSfondoFrameIdx; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float ominoSfondoFrameTimer; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float ominoSfondoX; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float ominoSfondoCurrentBaseY; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        float ominoSfondoRespawnTimer; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        bool ominoSfondoActive; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        float ominoSfondoHalfWidth; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Image* ominoFinestraImage; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        int32_t ominoFinestraFrameIdx; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        float ominoFinestraFrameTimer; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        float ominoFinestraX; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        int32_t ominoFinestraDirection; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        bool built; // 0x0100
    
        // Methods
        void Awake();  // RVA: 0x5402F0
        void OnEnable();  // RVA: 0x540F20
        void Build();  // RVA: 0x540350
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, bool raycast);  // RVA: 0x540D40
        void Update();  // RVA: 0x540FD0
        void SetSprites(Sprite* bg, Sprite[][] ominoSfondo, Sprite* luce, Sprite[][] ominoFinestra, Sprite* livelloSopra, Sprite* cornice);  // RVA: 0x540F40
        void .ctor();  // RVA: 0x541670
    };

    // Namespace: AutoBattle.UI
    class WorldFrameMirror : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* sourceFrame; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        RectTransform* myRT; // 0x0028
    
        // Methods
        void Awake();  // RVA: 0x5418A0
        void AutoDiscoverSource();  // RVA: 0x5416E0
        void LateUpdate();  // RVA: 0x541940
        void .ctor();  // RVA: 0x4E82E0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <SendCoroutine>d__48
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* eventName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bodyJson; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53CD50
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53CEC0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.Steam
{

    // Namespace: AutoBattle.Steam
    class AnalyticsManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static AnalyticsManager* <Instance>k__BackingField;
        // static Il2CppString* PREF_OPTED_OUT;
        // static Il2CppString* PREF_CONSENT_SHOWN;
        // static bool TRACK_ITEM_DROPS;
        // static int32_t MAX_PRELOGIN_BUFFERED;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* sessionId; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float sessionStartRealtime; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool sessionStartFired; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        int32_t maxSectorReachedThisSession; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t totalDeathsThisSession; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        int32_t totalDeathsInArena; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        int32_t totalPvPMatchesThisSession; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        int32_t currentSectorTracked; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool sessionEndFired; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        System.Collections.Generic.Queue<System.ValueTuple<System.String,System.String>> preLoginBuffer; // 0x0048
    
        // Methods
        static AnalyticsManager* get_Instance();  // RVA: 0x52FBC0
        static void set_Instance(AnalyticsManager* value);  // RVA: 0x52FE00
        static bool get_IsOptedOut();  // RVA: 0x52FD70
        static void set_IsOptedOut(bool value);  // RVA: 0x52FE60
        static bool get_HasShownConsent();  // RVA: 0x52FB80
        static void set_HasShownConsent(bool value);  // RVA: 0x52FDB0
        static bool get_IsEnabled();  // RVA: 0x52FC50
        static bool get_IsCollecting();  // RVA: 0x52FC00
        void Awake();  // RVA: 0x52CF00
        void Start();  // RVA: 0x52DB30
        void OnDestroy();  // RVA: 0x52D520
        void HandlePlayFabLoginSuccess();  // RVA: 0x52D4B0
        void OnApplicationQuit();  // RVA: 0x52D500
        void OnApplicationPause(bool pauseStatus);  // RVA: 0x52D4E0
        void TrySendSessionEnd();  // RVA: 0x52D500
        void TrackSessionStart();  // RVA: 0x52F680
        void TrackSessionEnd();  // RVA: 0x52F420
        void TrackSectorClear(int32_t sector, int32_t level, int32_t powerScore);  // RVA: 0x52EF00
        void TrackPlayerDeath(int32_t sector, int32_t level, int32_t powerScore, Il2CppString* enemyCategory, Il2CppString* enemyColor, int32_t hpPctBefore, int32_t sectorEnemyIndex);  // RVA: 0x52E9A0
        void TrackLevelUps(int32_t levelBefore, int32_t levelAfter, int32_t sector, int32_t powerScore);  // RVA: 0x52E7A0
        void TrackItemDrop(ItemInstance* item, Il2CppString* source);  // RVA: 0x4B53F0
        void TrackSectorEntered(int32_t sector, Il2CppString* source);  // RVA: 0x52F1F0
        void TrackCharacterReset(int32_t level, int32_t sector, int32_t powerScore, int32_t sectorEnemyIndex);  // RVA: 0x52E140
        void TrackPvPMatch(bool won, int32_t rpDelta, int32_t opponentPS, int32_t myPS, int32_t totalPvPMatches);  // RVA: 0x52EC80
        void TrackArenaWaveReached(int32_t wave, int32_t killsInWave, int32_t maxWaveRecord, bool waveCleared);  // RVA: 0x52DEE0
        void TrackArenaDeath(int32_t wave, int32_t checkpointWave);  // RVA: 0x52DD40
        void TrackForgeExecuted(Il2CppString* rarityFrom, Il2CppString* rarityTo, Il2CppString* sourceScreen);  // RVA: 0x52E4F0
        void TrackStaminaExhausted(int32_t sector, int32_t level);  // RVA: 0x52F960
        void TrackDemoLockedFeatureHit(Il2CppString* featureName, Il2CppString* sourceScreen);  // RVA: 0x52E360
        void Send(Il2CppString* eventName, System.Collections.Generic.Dictionary<System.String,System.Object> body);  // RVA: 0x52D7F0
        IEnumerator* SendCoroutine(Il2CppString* eventName, Il2CppString* bodyJson);  // RVA: 0x52D760
        void EnqueuePreLogin(Il2CppString* eventName, Il2CppString* bodyJson);  // RVA: 0x52D1C0
        void FlushPreLoginBuffer();  // RVA: 0x52D2B0
        void .ctor();  // RVA: 0x52FB00
    };

    // Namespace: AutoBattle.Steam
    class PlayerSnapshot
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* playerName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t level; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t powerScore; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t hp; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float atk; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float def; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float crit; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float parry; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Collections.Generic.List<AutoBattle.Steam.EquippedItemInfo> equippedItems; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Il2CppString* playFabId; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        int32_t characterType; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float totalBattleTime; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        int32_t rankingPoints; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        int32_t totalPvPMatches; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        int64_t lastUpdatedTicks; // 0x0058
    
        // Methods
        void .ctor();  // RVA: 0x533EF0
    };

    // Namespace: AutoBattle.Steam
    class EquippedItemInfo
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* slotName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* itemName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* rarity; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* category; // 0x0028
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

} // namespace AutoBattle.Steam

// Namespace: <global>
class LoginWithSteamRequest
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* SteamTicket; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool CreateAccount; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* TitleId; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class LoginWithCustomIdRequest
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* CustomId; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool CreateAccount; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* TitleId; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class LoginResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LoginResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class LoginResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* SessionTicket; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* PlayFabId; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class <>c__DisplayClass12_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayFabClient* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Boolean,System.String> callback; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <LoginWithSteam>b__0(bool success, Il2CppString* response);  // RVA: 0x53D430
};

// Namespace: <global>
class <>c__DisplayClass13_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayFabClient* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Boolean,System.String> callback; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <LoginWithCustomId>b__0(bool success, Il2CppString* response);  // RVA: 0x53D630
};

// Namespace: <global>
class <>c__DisplayClass14_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <UpdateUserData>b__0(bool success, Il2CppString* response);  // RVA: 0x53D7C0
};

// Namespace: <global>
class <>c__DisplayClass15_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <UpdateUserDataRaw>b__0(bool success, Il2CppString* response);  // RVA: 0x53D870
};

// Namespace: <global>
class <>c__DisplayClass16_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean,System.String> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <GetUserData>b__0(bool success, Il2CppString* response);  // RVA: 0x53D920
};

// Namespace: <global>
class <>c__DisplayClass17_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <UpdatePlayerStatistics>b__0(bool success, Il2CppString* response);  // RVA: 0x53D950
};

// Namespace: <global>
class <>c__DisplayClass18_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean,System.String> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <GetLeaderboardAroundPlayer>b__0(bool success, Il2CppString* response);  // RVA: 0x53D920
};

// Namespace: <global>
class <>c__DisplayClass19_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean,System.String> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <GetLeaderboard>b__0(bool success, Il2CppString* response);  // RVA: 0x53D920
};

// Namespace: <global>
class <>c__DisplayClass20_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <UpdateDisplayName>b__0(bool success, Il2CppString* response);  // RVA: 0x53DA00
};

// Namespace: <global>
class <>c__DisplayClass21_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* eventName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Boolean,System.String> callback; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <WritePlayerEvent>b__0(bool success, Il2CppString* response);  // RVA: 0x53DAB0
};

// Namespace: <global>
class <>c__DisplayClass22_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* functionName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Boolean,System.String> callback; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <ExecuteCloudScript>b__0(bool success, Il2CppString* response);  // RVA: 0x53DB80
};

// Namespace: <global>
class <ExecuteCloudScript>d__22
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* functionName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* functionParamsJson; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x536210
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x536460
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <GetLeaderboard>d__19
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean,System.String> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* statName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t startPosition; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t maxResults; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x538CF0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x538E90
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <GetLeaderboardAroundPlayer>d__18
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean,System.String> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* statName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t maxResults; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x538B30
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x538CB0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <GetUserData>d__16
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean,System.String> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    String[][] keys; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* targetPlayFabId; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x539510
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x539870
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <LoginWithCustomId>d__13
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabClient* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* customId; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53A7E0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53A9A0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <LoginWithSteam>d__12
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabClient* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* steamTicketHex; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53B510
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53B6D0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <PostAuthenticatedRequest>d__23
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabClient* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* endpoint; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* jsonBody; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Action<System.Boolean,System.String> callback; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53C2C0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53C340
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <PostRequest>d__24
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabClient* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* endpoint; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* jsonBody; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool authenticated; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Action<System.Boolean,System.String> callback; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    UnityWebRequest* <request>5__2; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x53C8A0
    bool MoveNext();  // RVA: 0x53C380
    void <>m__Finally1();  // RVA: 0x53C8E0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53C860
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <UpdateDisplayName>d__20
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayFabClient* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* displayName; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53DD70
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53DF00
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <UpdatePlayerStatistics>d__17
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* statName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t value; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53DF40
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53E0C0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <UpdateUserData>d__14
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* key; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    PlayFabClient* <>4__this; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* value; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53E4A0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53E6F0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <UpdateUserDataRaw>d__15
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* key; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* jsonValue; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53E220
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53E460
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <WritePlayerEvent>d__21
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* eventName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* bodyJson; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53ECB0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53EF40
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.Steam
{

    // Namespace: AutoBattle.Steam
    class PlayFabClient
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* titleId; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* sessionTicket; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* playFabId; // 0x0020
    
        // Methods
        Il2CppString* get_SessionTicket();  // RVA: 0x4B7490
        Il2CppString* get_PlayFabId();  // RVA: 0x4F89C0
        bool get_IsLoggedIn();  // RVA: 0x530A40
        Il2CppString* get_BaseUrl();  // RVA: 0x5309F0
        void .ctor(Il2CppString* titleId);  // RVA: 0x5309B0
        IEnumerator* LoginWithSteam(Il2CppString* steamTicketHex, System.Action<System.Boolean,System.String> callback);  // RVA: 0x5303C0
        IEnumerator* LoginWithCustomId(Il2CppString* customId, System.Action<System.Boolean,System.String> callback);  // RVA: 0x530310
        IEnumerator* UpdateUserData(Il2CppString* key, Il2CppString* value, System.Action<System.Boolean> callback);  // RVA: 0x530830
        IEnumerator* UpdateUserDataRaw(Il2CppString* key, Il2CppString* jsonValue, System.Action<System.Boolean> callback);  // RVA: 0x530770
        IEnumerator* GetUserData(Il2CppString* targetPlayFabId, String[][] keys, System.Action<System.Boolean,System.String> callback);  // RVA: 0x530250
        IEnumerator* UpdatePlayerStatistics(Il2CppString* statName, int32_t value, System.Action<System.Boolean> callback);  // RVA: 0x5306B0
        IEnumerator* GetLeaderboardAroundPlayer(Il2CppString* statName, int32_t maxResults, System.Action<System.Boolean,System.String> callback);  // RVA: 0x5300D0
        IEnumerator* GetLeaderboard(Il2CppString* statName, int32_t startPosition, int32_t maxResults, System.Action<System.Boolean,System.String> callback);  // RVA: 0x530190
        IEnumerator* UpdateDisplayName(Il2CppString* displayName, System.Action<System.Boolean> callback);  // RVA: 0x530600
        IEnumerator* WritePlayerEvent(Il2CppString* eventName, Il2CppString* bodyJson, System.Action<System.Boolean,System.String> callback);  // RVA: 0x5308F0
        IEnumerator* ExecuteCloudScript(Il2CppString* functionName, Il2CppString* functionParamsJson, System.Action<System.Boolean,System.String> callback);  // RVA: 0x530010
        IEnumerator* PostAuthenticatedRequest(Il2CppString* endpoint, Il2CppString* jsonBody, System.Action<System.Boolean,System.String> callback);  // RVA: 0x530470
        IEnumerator* PostRequest(Il2CppString* endpoint, Il2CppString* jsonBody, bool authenticated, System.Action<System.Boolean,System.String> callback);  // RVA: 0x530530
        Il2CppString* EscapeJsonString(Il2CppString* str);  // RVA: 0x52FEB0
    };

} // namespace AutoBattle.Steam

// Namespace: <global>
class LeaderboardResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LeaderboardResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class LeaderboardResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> Leaderboard; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class GetUserDataResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    GetUserDataResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class GetUserDataResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    UserDataDict* Data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class UserDataDict
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    UserDataRecord* PlayerSnapshot; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class UserDataRecord
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* Value; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* LastUpdated; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* Permission; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<System.Boolean> <>9__56_1;
    // static System.Action<System.Boolean> <>9__57_1;


    // Methods
    static void .cctor();  // RVA: 0x53DD00
    void .ctor();  // RVA: 0x4BD420
    void <LoginWithSteam>b__56_1(bool _);  // RVA: 0x4B53F0
    void <LoginWithDevCustomId>b__57_1(bool _);  // RVA: 0x4B53F0
};

// Namespace: <global>
class <>c__DisplayClass56_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* resultMsg; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool done; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <LoginWithSteam>b__0(bool s, Il2CppString* msg);  // RVA: 0x53DC60
};

// Namespace: <global>
class <>c__DisplayClass57_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* resultMsg; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <LoginWithDevCustomId>b__0(bool s, Il2CppString* msg);  // RVA: 0x504240
};

// Namespace: <global>
class <>c__DisplayClass59_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <ClearUserData>b__0(bool ok);  // RVA: 0x4EE9E0
};

// Namespace: <global>
class <>c__DisplayClass61_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <LogPvPChallengeCloudScript>b__0(bool s, Il2CppString* r);  // RVA: 0x504240
};

// Namespace: <global>
class <>c__DisplayClass62_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <ResetPvPLeaderboardVersionCoroutine>b__0(bool s, Il2CppString* r);  // RVA: 0x504240
};

// Namespace: <global>
class <>c__DisplayClass63_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <HardResetAllPvPRPCoroutine>b__0(bool s, Il2CppString* r);  // RVA: 0x504240
};

// Namespace: <global>
class <>c__DisplayClass65_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool snapshotOk; // 0x0010
    bool psOk; // 0x0011
    bool lvlOk; // 0x0012

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <UploadSnapshotCoroutine>b__0(bool ok);  // RVA: 0x53DC90
    void <UploadSnapshotCoroutine>b__1(bool ok);  // RVA: 0x53DCA0
    void <UploadSnapshotCoroutine>b__2(bool ok);  // RVA: 0x53DCB0
};

// Namespace: <global>
class <>c__DisplayClass68_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <FetchOpponentsCoroutine>b__0(bool s, Il2CppString* r);  // RVA: 0x504240
    void <FetchOpponentsCoroutine>b__1(bool s, Il2CppString* r);  // RVA: 0x504240
    void <FetchOpponentsCoroutine>b__2(bool s, Il2CppString* r);  // RVA: 0x504240
};

// Namespace: <global>
class <>c__DisplayClass68_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* fetchResponse; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <FetchOpponentsCoroutine>b__3(bool s, Il2CppString* r);  // RVA: 0x504240
};

// Namespace: <global>
class <>c__DisplayClass73_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <GetPlayFabIDsFromSteamIDs>b__0(bool s, Il2CppString* r);  // RVA: 0x504240
};

// Namespace: <global>
class <>c__DisplayClass74_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,System.String> mapping; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <FetchFriendSnapshots>b__0(System.Collections.Generic.Dictionary<System.String,System.String> m);  // RVA: 0x5042C0
};

// Namespace: <global>
class <>c__DisplayClass74_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* fetchResponse; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <FetchFriendSnapshots>b__1(bool s, Il2CppString* r);  // RVA: 0x504240
};

// Namespace: <global>
class <ClearUserData>d__59
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayFabManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* key; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x536050
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5361D0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <FetchFriendSnapshots>d__74
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<System.ValueTuple<System.UInt64,System.String>> friends; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayFabManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>>> callback; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    <>c__DisplayClass74_0* <>8__1; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    <>c__DisplayClass74_1* <>8__2; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>> <results>5__2; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    int32_t <fetchCount>5__3; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List.Enumerator<System.ValueTuple<System.UInt64,System.String>> <>7__wrap3; // 0x0058
    uint8_t pad_0059[0x1F]; // 0x0059
    System.ValueTuple<System.UInt64,System.String> <friend>5__5; // 0x0078
    uint8_t pad_0079[0xF]; // 0x0079
    Il2CppString* <playFabId>5__6; // 0x0088

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x536EF0
    bool MoveNext();  // RVA: 0x5364A0
    void <>m__Finally1();  // RVA: 0x536F80
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x536EB0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <FetchLeaderboard>d__79
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* statName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t startPos; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    int32_t maxResults; // 0x003C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x5377B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5378C0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <FetchLeaderboardAroundPlayer>d__80
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* statName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t maxResults; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x536FD0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5370D0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <FetchOpponentsCoroutine>d__68
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass68_0* <>8__1; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    <>c__DisplayClass68_1* <>8__2; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool <useRanking>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Il2CppString* <matchmakingStat>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> <entries>5__4; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.List.Enumerator<AutoBattle.Steam.LeaderboardEntry> <>7__wrap4; // 0x0050
    uint8_t pad_0051[0x17]; // 0x0051
    LeaderboardEntry* <candidate>5__6; // 0x0068

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x5388C0
    bool MoveNext();  // RVA: 0x537900
    void <>m__Finally1();  // RVA: 0x538950
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x538880
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <FetchUserData>d__58
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* playFabId; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* key; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x5389A0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x538AF0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <GetPlayFabIDsFromSteamIDs>d__73
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    String[][] steamIds; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<System.Collections.Generic.Dictionary<System.String,System.String>> callback; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    <>c__DisplayClass73_0* <>8__1; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.Dictionary<System.String,System.String> <result>5__2; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t <batchStart>5__3; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x538ED0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5394D0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <HardResetAllPvPRPCoroutine>d__63
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass63_0* <>8__1; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x5398B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x539AF0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <LogPvPChallengeCloudScript>d__61
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* challengerName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* opponentPlayFabId; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t challengerLevel; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t challengerPowerScore; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    bool challengerWon; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    PlayFabManager* <>4__this; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    <>c__DisplayClass61_0* <>8__1; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53A230
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53A7A0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <LoginWithDevCustomId>d__57
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass57_0* <>8__1; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53A9E0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53AEB0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <LoginWithRetry>d__55
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53AEF0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53B4D0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <LoginWithSteam>d__56
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass56_0* <>8__1; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float <timeout>5__2; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <elapsed>5__3; // 0x0034

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53B710
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53C030
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <ResetPvPLeaderboardVersionCoroutine>d__62
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass62_0* <>8__1; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53C9B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53CBF0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <SaveUserData>d__78
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* key; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* value; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53CC30
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53CD10
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <UpdateStatistic>d__77
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* statName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t value; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53E100
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53E1E0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <UploadSnapshotCoroutine>d__65
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* snapshotJson; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayFabManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    <>c__DisplayClass65_0* <>8__1; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayerSnapshot* snapshot; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53E730
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53EAF0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <WriteAnalyticsEvent>d__53
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* eventName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* bodyJson; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53EB30
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53EC70
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.Steam
{

    // Namespace: AutoBattle.Steam
    class PlayFabManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static PlayFabManager* <Instance>k__BackingField;
        // static Il2CppString* FULL_TITLE_ID;
        // static Il2CppString* DEMO_TITLE_ID;
        // static Il2CppString* SNAPSHOT_KEY;
        // static Il2CppString* POWERSCORE_STAT;
        // static Il2CppString* PVPRATING_STAT;
        // static Il2CppString* LEVEL_STAT;
        // static int32_t MATCHMAKING_CALIBRATION_THRESHOLD;
        // static int32_t MAX_LOGIN_RETRIES;
        // static float RETRY_DELAY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        PlayFabClient* client; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* <LastLoginError>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Il2CppString* <LoginStateInfo>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t loginRetryCount; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Action* OnLoginSuccess; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Action<System.String> OnLoginFailed; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Action<AutoBattle.Steam.PlayerSnapshot> OnOpponentFound; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Action* OnNoOpponentFound; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Il2CppString* lastUploadedSnapshotJson; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        System.Collections.Generic.List<AutoBattle.Steam.PlayerSnapshot> cachedOpponents; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        bool isFetchingOpponents; // 0x0070
    
        // Methods
        static PlayFabManager* get_Instance();  // RVA: 0x533B30
        static void set_Instance(PlayFabManager* value);  // RVA: 0x533E80
        static Il2CppString* get_CurrentTitleId();  // RVA: 0x533AE0
        static Il2CppString* get_TITLE_ID();  // RVA: 0x533AE0
        bool get_IsLoggedIn();  // RVA: 0x533B80
        Il2CppString* get_PlayFabId();  // RVA: 0x533BD0
        Il2CppString* get_LastLoginError();  // RVA: 0x533BB0
        void set_LastLoginError(Il2CppString* value);  // RVA: 0x4A7D70
        Il2CppString* get_LoginStateInfo();  // RVA: 0x533BC0
        void set_LoginStateInfo(Il2CppString* value);  // RVA: 0x533EE0
        void add_OnLoginSuccess(Action* value);  // RVA: 0x5338E0
        void remove_OnLoginSuccess(Action* value);  // RVA: 0x533C90
        void add_OnLoginFailed(System.Action<System.String> value);  // RVA: 0x533830
        void remove_OnLoginFailed(System.Action<System.String> value);  // RVA: 0x533BE0
        void add_OnOpponentFound(System.Action<AutoBattle.Steam.PlayerSnapshot> value);  // RVA: 0x533A20
        void remove_OnOpponentFound(System.Action<AutoBattle.Steam.PlayerSnapshot> value);  // RVA: 0x533DD0
        void add_OnNoOpponentFound(Action* value);  // RVA: 0x533980
        void remove_OnNoOpponentFound(Action* value);  // RVA: 0x533D30
        bool get_IsFetchingOpponents();  // RVA: 0x533B70
        bool HasCachedOpponents();  // RVA: 0x532390
        System.Collections.Generic.List<AutoBattle.Steam.PlayerSnapshot> get_CachedOpponents();  // RVA: 0x533AD0
        void Awake();  // RVA: 0x530A60
        void OnDestroy();  // RVA: 0x532A20
        IEnumerator* WriteAnalyticsEvent(Il2CppString* eventName, Il2CppString* bodyJson);  // RVA: 0x5336B0
        void Login();  // RVA: 0x532930
        IEnumerator* LoginWithRetry();  // RVA: 0x532850
        IEnumerator* LoginWithSteam();  // RVA: 0x5328C0
        IEnumerator* LoginWithDevCustomId();  // RVA: 0x5327E0
        IEnumerator* FetchUserData(Il2CppString* playFabId, Il2CppString* key, System.Action<System.Boolean,System.String> callback);  // RVA: 0x531860
        IEnumerator* ClearUserData(Il2CppString* key, System.Action<System.Boolean> callback);  // RVA: 0x531510
        void LogPvPChallenge(Il2CppString* opponentPlayFabId, Il2CppString* opponentName, int32_t opponentLevel, int32_t opponentPowerScore, bool challengerWon);  // RVA: 0x532550
        IEnumerator* LogPvPChallengeCloudScript(Il2CppString* opponentPlayFabId, Il2CppString* challengerName, int32_t challengerLevel, int32_t challengerPowerScore, bool challengerWon);  // RVA: 0x532480
        IEnumerator* ResetPvPLeaderboardVersionCoroutine();  // RVA: 0x532EC0
        IEnumerator* HardResetAllPvPRPCoroutine();  // RVA: 0x532320
        void UploadSnapshot();  // RVA: 0x5334E0
        IEnumerator* UploadSnapshotCoroutine(PlayerSnapshot* snapshot, Il2CppString* snapshotJson);  // RVA: 0x533430
        PlayerSnapshot* BuildSnapshot(PlayerState* player, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x530E60
        void PreFetchOpponents();  // RVA: 0x532E20
        IEnumerator* FetchOpponentsCoroutine();  // RVA: 0x5317F0
        PlayerSnapshot* GetRandomOpponent(int32_t playerPowerScore, float rangePercent);  // RVA: 0x5319D0
        EnemyState* SnapshotToEnemyState(PlayerSnapshot* snapshot);  // RVA: 0x532FF0
        PlayerSnapshot* BuildFallbackSnapshot(LeaderboardEntry* entry);  // RVA: 0x530C80
        static bool IsSelf(PlayerSnapshot* op, Il2CppString* myPlayFabId, Il2CppString* mySteamName);  // RVA: 0x5323E0
        IEnumerator* GetPlayFabIDsFromSteamIDs(String[][] steamIds, System.Action<System.Collections.Generic.Dictionary<System.String,System.String>> callback);  // RVA: 0x531920
        IEnumerator* FetchFriendSnapshots(System.Collections.Generic.List<System.ValueTuple<System.UInt64,System.String>> friends, System.Action<System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>>> callback);  // RVA: 0x5315C0
        System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> ParseLeaderboardResponse(Il2CppString* json);  // RVA: 0x532AF0
        PlayerSnapshot* ParseSnapshotFromUserData(Il2CppString* json);  // RVA: 0x532C00
        IEnumerator* UpdateStatistic(Il2CppString* statName, int32_t value, System.Action<System.Boolean> callback);  // RVA: 0x533370
        IEnumerator* SaveUserData(Il2CppString* key, Il2CppString* value, System.Action<System.Boolean> callback);  // RVA: 0x532F30
        IEnumerator* FetchLeaderboard(Il2CppString* statName, int32_t startPos, int32_t maxResults, System.Action<System.Boolean,System.String> callback);  // RVA: 0x531730
        IEnumerator* FetchLeaderboardAroundPlayer(Il2CppString* statName, int32_t maxResults, System.Action<System.Boolean,System.String> callback);  // RVA: 0x531670
        void .ctor();  // RVA: 0x533760
    };

    // Namespace: AutoBattle.Steam
    class LeaderboardEntry
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* PlayFabId; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* DisplayName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int32_t StatValue; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        int32_t Position; // 0x0024
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.Steam
    class SteamIdMappingResponse
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        SteamIdMappingData* data; // 0x0010
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.Steam
    class SteamIdMappingData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<AutoBattle.Steam.SteamIdMappingEntry> Data; // 0x0010
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.Steam
    class SteamIdMappingEntry
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* SteamStringId; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* PlayFabId; // 0x0018
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

} // namespace AutoBattle.Steam

// Namespace: <global>
class RankingDataResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RankingDataResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class RankingDataResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RankingDataDict* Data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class RankingDataDict
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RankingDataRecord* RankingData; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class RankingDataRecord
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* Value; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class LeaderboardResponseWrapper
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LeaderboardResponseWrapperData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class LeaderboardResponseWrapperData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> Leaderboard; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class <>c__DisplayClass75_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool statOk; // 0x0010
    bool dataOk; // 0x0011
    uint8_t pad_0012[0x6]; // 0x0012
    System.Action<System.Boolean> <>9__1; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <SyncToPlayFabCoroutine>b__1(bool ok);  // RVA: 0x53DC90
    void <SyncToPlayFabCoroutine>b__0(bool ok);  // RVA: 0x53DCA0
};

// Namespace: <global>
class <>c__DisplayClass76_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean,System.String> <>9__0; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <LoadFromPlayFab>b__0(bool ok, Il2CppString* r);  // RVA: 0x504240
};

// Namespace: <global>
class <>c__DisplayClass77_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool selfResyncOk; // 0x0010
    bool topOk; // 0x0011
    uint8_t pad_0012[0x6]; // 0x0012
    Il2CppString* topResponse; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool aroundOk; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* aroundResponse; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <FetchLeaderboard>b__0(bool ok);  // RVA: 0x53DC90
    void <FetchLeaderboard>b__1(bool ok, Il2CppString* r);  // RVA: 0x53DCC0
    void <FetchLeaderboard>b__2(bool ok, Il2CppString* r);  // RVA: 0x53DCE0
};

// Namespace: <global>
class <FetchLeaderboard>d__77
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<AutoBattle.Steam.LeaderboardEntry[],AutoBattle.Steam.LeaderboardEntry[],System.Int32> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RankingManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    <>c__DisplayClass77_0* <>8__1; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    LeaderboardEntry[][] <topEntries>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    LeaderboardEntry[][] <aroundEntries>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t <myPosition>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x537110
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x537770
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <LoadFromPlayFab>d__76
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    <>c__DisplayClass76_0* <>8__1; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RankingManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t <attempt>5__2; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x539B30
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53A1F0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <SyncToPlayFabCoroutine>d__75
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    RankingManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass75_0* <>8__1; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t <attempt>5__2; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x53CF00
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53D3F0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.Steam
{

    // Namespace: AutoBattle.Steam
    class RankingManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static RankingManager* <Instance>k__BackingField;
        // static Il2CppString* PVPRATING_STAT;
        // static Il2CppString* RANKING_DATA_KEY;
        // static int32_t RP_WIN_BASE;
        // static int32_t RP_LOSE_BASE;
        // static int32_t RP_WIN_MAX;
        // static int32_t RP_LOSE_MAX;
        // static int32_t RP_OFFLINE_WIN_BASE;
        // static int32_t RP_OFFLINE_LOSE_BASE;
        // static float PS_BONUS_WIN_FACTOR;
        // static float PS_BONUS_LOSE_FACTOR;
        // static int32_t STREAK_ACTIVATE;
        // static float STREAK_MULT_4;
        // static float STREAK_MULT_5;
        // static int32_t SEASON_DURATION_DAYS;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RankingData* data; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool rankingLoaded; // 0x0028
        bool suppressSync; // 0x0029
        uint8_t pad_002A[0x6]; // 0x002A
        System.Action<System.Int32,System.Int32,AutoBattle.Steam.RankTier> OnRPChanged; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Action<AutoBattle.Steam.RankTier> OnTierReached; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Action<System.Int32> OnNewSeason; // 0x0040
    
        // Methods
        static RankingManager* get_Instance();  // RVA: 0x535CE0
        static void set_Instance(RankingManager* value);  // RVA: 0x535FF0
        void BeginBatchProcess();  // RVA: 0x534130
        void EndBatchProcess();  // RVA: 0x534770
        int32_t get_CurrentRP();  // RVA: 0x535AD0
        int32_t get_WinStreak();  // RVA: 0x535DC0
        RankTier get_CurrentTier();  // RVA: 0x535AF0
        RankTier get_HighestTier();  // RVA: 0x535C80
        int32_t get_HighestRP();  // RVA: 0x535C60
        int32_t get_SeasonNumber();  // RVA: 0x535D60
        int32_t get_SeasonWins();  // RVA: 0x535D80
        int32_t get_SeasonLosses();  // RVA: 0x535D40
        int32_t get_TotalPvPMatches();  // RVA: 0x535DA0
        System.Collections.Generic.List<AutoBattle.Steam.PvPMatchRecord> get_RecentMatches();  // RVA: 0x535D20
        int32_t get_DaysRemaining();  // RVA: 0x535B50
        int32_t get_FloorRP();  // RVA: 0x535C40
        void add_OnRPChanged(System.Action<System.Int32,System.Int32,AutoBattle.Steam.RankTier> value);  // RVA: 0x535970
        void remove_OnRPChanged(System.Action<System.Int32,System.Int32,AutoBattle.Steam.RankTier> value);  // RVA: 0x535E90
        void add_OnTierReached(System.Action<AutoBattle.Steam.RankTier> value);  // RVA: 0x535A20
        void remove_OnTierReached(System.Action<AutoBattle.Steam.RankTier> value);  // RVA: 0x535F40
        void add_OnNewSeason(System.Action<System.Int32> value);  // RVA: 0x5358C0
        void remove_OnNewSeason(System.Action<System.Int32> value);  // RVA: 0x535DE0
        void Awake();  // RVA: 0x533F70
        void OnDestroy();  // RVA: 0x534B10
        int32_t ProcessPvPResult(bool playerWon, int32_t playerPowerScore, int32_t opponentPowerScore, Il2CppString* opponentName, int32_t opponentLevel, bool isOffline);  // RVA: 0x534EF0
        int32_t ProcessPvPResult(bool playerWon, int32_t playerPowerScore, int32_t opponentPowerScore, bool isOffline);  // RVA: 0x5350C0
        int32_t CalculateActiveRP(bool playerWon, int32_t playerPS, int32_t opponentPS);  // RVA: 0x534140
        int32_t CalculateOfflineRP(bool playerWon, int32_t playerPS, int32_t opponentPS);  // RVA: 0x534250
        float GetStreakMultiplier();  // RVA: 0x534810
        static RankTier GetTierForRP(int32_t rp);  // RVA: 0x534920
        static int32_t GetTierMinRP(RankTier tier);  // RVA: 0x5349A0
        static int32_t GetTierMaxRP(RankTier tier);  // RVA: 0x534960
        static Il2CppString* GetTierName(RankTier tier);  // RVA: 0x5349D0
        static Color GetTierColor(RankTier tier);  // RVA: 0x534860
        void CheckSeasonRollover();  // RVA: 0x534340
        void StartNewSeason(int32_t seasonNum);  // RVA: 0x5355C0
        void DebugForceSeasonReset();  // RVA: 0x534410
        void DebugHardResetAllPvPRP();  // RVA: 0x534590
        void ResetForCharacterReset();  // RVA: 0x535490
        void PerformSeasonReset();  // RVA: 0x534DA0
        void SyncToPlayFab();  // RVA: 0x535730
        IEnumerator* SyncToPlayFabCoroutine();  // RVA: 0x5356C0
        IEnumerator* LoadFromPlayFab();  // RVA: 0x534AA0
        IEnumerator* FetchLeaderboard(System.Action<AutoBattle.Steam.LeaderboardEntry[],AutoBattle.Steam.LeaderboardEntry[],System.Int32> callback);  // RVA: 0x534780
        LeaderboardEntry[][] ParseLeaderboardEntries(Il2CppString* json);  // RVA: 0x534BE0
        void .ctor();  // RVA: 0x4E82E0
    };

    // Namespace: AutoBattle.Steam
    struct RankTier
    {
    public:
        // Static fields
        // static RankTier Bronze;
        // static RankTier Silver;
        // static RankTier Gold;
        // static RankTier Diamond;
        // static RankTier Legend;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Steam
    class RankingData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t rp; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t highestRP; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t floorRP; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t winStreak; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t seasonNumber; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t seasonStartTicks; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int64_t seasonEndTicks; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t seasonWins; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        int32_t seasonLosses; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        int32_t totalPvPMatches; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<AutoBattle.Steam.PvPMatchRecord> recentMatches; // 0x0048
    
        // Methods
        void .ctor();  // RVA: 0x54FC20
    };

    // Namespace: AutoBattle.Steam
    class PvPMatchRecord
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* opponentName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t opponentLevel; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        bool playerWon; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t rpDelta; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        bool isOffline; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int64_t timestampTicks; // 0x0028
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.Steam
    class SteamManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static SteamManager* <Instance>k__BackingField;
        // static uint32_t FULL_APP_ID;
        // static uint32_t DEMO_APP_ID;
    
        uint8_t pad_0000[0x20]; // 0x0000
        bool <Initialized>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        SteamAPIWarningMessageHook_t* m_SteamAPIWarningMessageHook; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Steamworks.Callback<Steamworks.GetTicketForWebApiResponse_t> m_GetTicketForWebApiResponse; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Il2CppString* m_pendingWebApiTicketHex; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool m_webApiTicketReady; // 0x0040
        bool m_webApiTicketFailed; // 0x0041
        bool m_webApiTicketRequestInFlight; // 0x0042
    
        // Methods
        static SteamManager* get_Instance();  // RVA: 0x558CF0
        static void set_Instance(SteamManager* value);  // RVA: 0x558D60
        static uint32_t get_CurrentAppId();  // RVA: 0x558CB0
        bool get_Initialized();  // RVA: 0x558CE0
        void set_Initialized(bool value);  // RVA: 0x504260
        static void SteamAPIDebugTextHook(int32_t nSeverity, StringBuilder* pchDebugText);  // RVA: 0x558C30
        void Awake();  // RVA: 0x558060
        void Update();  // RVA: 0x558CA0
        void OnDestroy();  // RVA: 0x558860
        Il2CppString* GetPlayerName();  // RVA: 0x558840
        uint64_t GetSteamId();  // RVA: 0x558850
        Texture2D* GetPlayerAvatar();  // RVA: 0x558670
        void RequestWebApiTicket();  // RVA: 0x558B30
        void OnGetTicketForWebApiResponse(GetTicketForWebApiResponse_t response);  // RVA: 0x558940
        bool get_IsWebApiTicketReady();  // RVA: 0x543360
        bool get_IsWebApiTicketFailed();  // RVA: 0x558D30
        bool get_IsWebApiTicketRequestInFlight();  // RVA: 0x558D40
        Il2CppString* get_WebApiTicketHex();  // RVA: 0x558D50
        System.Collections.Generic.List<System.ValueTuple<System.UInt64,System.String>> GetFriendsWithGame();  // RVA: 0x5584C0
        void .ctor();  // RVA: 0x4E82E0
    };

} // namespace AutoBattle.Steam

namespace AutoBattle.Save
{

    // Namespace: AutoBattle.Save
    class SaveData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* name; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t genderInt; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t level; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t xp; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float stamina; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> inventory; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<AutoBattle.Save.EquipSlotSave> equippedSlots; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t currentSector; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        int32_t sectorEnemy; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        Boolean[][] sectorCleared; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        int32_t currentHp; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        int32_t nextUid; // 0x004C
    
        // Methods
        void .ctor();  // RVA: 0x54FCA0
    };

    // Namespace: AutoBattle.Save
    class EquipSlotSave
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* slotName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t itemUid; // 0x0018
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
        void .ctor(Il2CppString* slotName, int32_t itemUid);  // RVA: 0x544690
    };

} // namespace AutoBattle.Save

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<AutoBattle.Data.ItemInstance> <>9__4_0;


    // Methods
    static void .cctor();  // RVA: 0x55A4D0
    void .ctor();  // RVA: 0x4BD420
    int32_t <BuildCanonicalString>b__4_0(ItemInstance* a, ItemInstance* b);  // RVA: 0x559650
};

namespace AutoBattle.Save
{

    // Namespace: AutoBattle.Save
    class SaveIntegrity
    {
    public:
        // Static fields
        // static Byte[][] _encodedKey;
    
    
        // Methods
        static Byte[][] DecodeKey();  // RVA: 0x550BD0
        static Il2CppString* ComputeChecksum(PlayerState* state);  // RVA: 0x550870
        static bool Verify(PlayerState* state, Il2CppString* storedChecksum);  // RVA: 0x550CF0
        static Il2CppString* BuildCanonicalString(PlayerState* ps);  // RVA: 0x54FDF0
        static void .cctor();  // RVA: 0x550D80
    };

    // Namespace: AutoBattle.Save
    class SaveSystem
    {
    public:
        // Static fields
        // static Il2CppString* LEGACY_PREFS_KEY;
        // static Il2CppString* LEGACY_PREFS_KEY_ALT;
        // static Action* OnTamperedSaveDetected;
    
    
        // Methods
        static Il2CppString* GetSavePath(uint64_t steamId);  // RVA: 0x5511E0
        static void Save(PlayerState* state, uint64_t steamId);  // RVA: 0x551CC0
        static PlayerState* Load(uint64_t steamId);  // RVA: 0x551460
        static Il2CppString* MigrateLegacyFields(Il2CppString* json);  // RVA: 0x5516F0
        static bool HasSave(uint64_t steamId);  // RVA: 0x551370
        static void Delete(uint64_t steamId);  // RVA: 0x551010
        static int32_t ReadWipeGeneration(uint64_t steamId);  // RVA: 0x551AA0
        static void StampWipeGeneration(uint64_t steamId, int32_t generation);  // RVA: 0x551E90
        static Il2CppString* ReadOrMigrate(uint64_t steamId);  // RVA: 0x551890
        static PlayerState* TryRestoreFromBackup(uint64_t steamId);  // RVA: 0x552010
        static Il2CppString* ReadLegacyPrefs(uint64_t steamId);  // RVA: 0x551790
        static bool HasLegacyPrefs(uint64_t steamId);  // RVA: 0x5512C0
        static void DeleteLegacyPrefs(uint64_t steamId);  // RVA: 0x550EE0
        static void AtomicWrite(Il2CppString* path, Il2CppString* content);  // RVA: 0x550E10
        static void TryDelete(Il2CppString* path);  // RVA: 0x551F40
    };

    // Namespace: AutoBattle.Save
    class SaveWrapper
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* payload; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* checksum; // 0x0018
    
        // Methods
        static Il2CppString* Wrap(PlayerState* state);  // RVA: 0x552560
        static UnwrapResult* Unwrap(Il2CppString* json);  // RVA: 0x552220
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.Save
    class UnwrapResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PlayerState* state; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        bool checksumValid; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* error; // 0x0020
    
        // Methods
        void .ctor(PlayerState* state, bool checksumValid, Il2CppString* error);  // RVA: 0x55A5B0
    };

} // namespace AutoBattle.Save

// Namespace: <global>
class <>c__DisplayClass15_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Rarity rarity; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GenerateFirstClearReward>b__0(ItemData* id);  // RVA: 0x559850
};

namespace AutoBattle.Progression
{

    // Namespace: AutoBattle.Progression
    class SectorProgressionManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<AutoBattle.Data.SectorData> sectors; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PlayerState* playerState; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameManager* gameManager; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Action<AutoBattle.Data.SectorData> OnSectorChanged; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Action<AutoBattle.Data.SectorData,System.Boolean> OnSectorCleared; // 0x0040
    
        // Methods
        void add_OnSectorChanged(System.Action<AutoBattle.Data.SectorData> value);  // RVA: 0x553210
        void remove_OnSectorChanged(System.Action<AutoBattle.Data.SectorData> value);  // RVA: 0x553370
        void add_OnSectorCleared(System.Action<AutoBattle.Data.SectorData,System.Boolean> value);  // RVA: 0x5532C0
        void remove_OnSectorCleared(System.Action<AutoBattle.Data.SectorData,System.Boolean> value);  // RVA: 0x553420
        void Start();  // RVA: 0x5530F0
        SectorData* GetCurrentSector();  // RVA: 0x552DF0
        Il2CppString* GetCurrentEnemyInfo();  // RVA: 0x552A90
        void AdvanceEnemy();  // RVA: 0x5526D0
        void OnPlayerDeath();  // RVA: 0x552E80
        void OnSectorComplete();  // RVA: 0x552F50
        ItemInstance* GenerateFirstClearReward(int32_t sectorIndex);  // RVA: 0x552770
        Il2CppString* GetColorVariantName(int32_t colorVariant);  // RVA: 0x552A00
        void .ctor();  // RVA: 0x4E82E0
    };

    // Namespace: AutoBattle.Progression
    class StaminaSystem : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float regenRatePerSecond; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float maxStamina; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        System.Action<System.Single> OnStaminaChanged; // 0x0028
    
        // Methods
        void add_OnStaminaChanged(System.Action<System.Single> value);  // RVA: 0x553B40
        void remove_OnStaminaChanged(System.Action<System.Single> value);  // RVA: 0x553BF0
        void Update();  // RVA: 0x553960
        bool ConsumeStamina(float amount);  // RVA: 0x5534D0
        bool HasEnoughStamina(float required);  // RVA: 0x5536D0
        float GetCurrentStamina();  // RVA: 0x553630
        void RestoreStamina();  // RVA: 0x5537F0
        void .ctor();  // RVA: 0x553B20
    };

} // namespace AutoBattle.Progression

// Namespace: <global>
class <>c__DisplayClass5_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Rarity fromRarity; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetRecipe>b__0(CraftingRecipe* r);  // RVA: 0x4D44B0
};

namespace AutoBattle.Inventory
{

    // Namespace: AutoBattle.Inventory
    class CraftingSystem : public MonoBehaviour
    {
    public:
        // Static fields
        // static System.Collections.Generic.List<AutoBattle.Data.CraftingRecipe> recipes;
        // static bool recipesInitialized;
    
        uint8_t pad_0000[0x20]; // 0x0000
        InventoryManager* inventoryManager; // 0x0020
    
        // Methods
        void Start();  // RVA: 0x544300
        static void InitializeRecipes();  // RVA: 0x543F90
        static CraftingRecipe* GetRecipe(Rarity fromRarity);  // RVA: 0x543E90
        bool CanCraft(Rarity fromRarity, PlayerState* playerState);  // RVA: 0x543440
        ItemInstance* DoCraft(Rarity fromRarity, PlayerState* playerState, System.Func<AutoBattle.Data.Rarity,AutoBattle.Data.ItemInstance> generateItem);  // RVA: 0x543540
        int32_t GetAvailableCount(Rarity rarity, PlayerState* playerState);  // RVA: 0x543BC0
        void .ctor();  // RVA: 0x4E82E0
        static void .cctor();  // RVA: 0x544410
    };

} // namespace AutoBattle.Inventory

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static Action* <>9__6_0;
    // static System.Func<AutoBattle.Data.ItemInstance,System.Boolean> <>9__10_0;
    // static System.Func<AutoBattle.Data.ItemInstance,System.Boolean> <>9__10_1;


    // Methods
    static void .cctor();  // RVA: 0x55A540
    void .ctor();  // RVA: 0x4BD420
    void <Start>b__6_0();  // RVA: 0x559740
    bool <GetCompatibleItems>b__10_0(ItemInstance* i);  // RVA: 0x559680
    bool <GetCompatibleItems>b__10_1(ItemInstance* i);  // RVA: 0x5596A0
};

// Namespace: <global>
class <>c__DisplayClass10_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* otherEquipped; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetCompatibleItems>b__2(ItemInstance* i);  // RVA: 0x559800
};

// Namespace: <global>
class <>c__DisplayClass10_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EquipSlot expectedSlot; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetCompatibleItems>b__3(ItemInstance* i);  // RVA: 0x559830
};

namespace AutoBattle.Inventory
{

    // Namespace: AutoBattle.Inventory
    class EquipmentManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Action* OnEquipChanged; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        String[][] SLOT_NAMES; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PlayerState* playerState; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        InventoryManager* inventoryManager; // 0x0038
    
        // Methods
        void add_OnEquipChanged(Action* value);  // RVA: 0x545730
        void remove_OnEquipChanged(Action* value);  // RVA: 0x5457D0
        void Start();  // RVA: 0x5451F0
        void EquipItem(Il2CppString* slotName, ItemInstance* item);  // RVA: 0x5446E0
        void UnequipSlot(Il2CppString* slotName);  // RVA: 0x545450
        ItemInstance* GetEquippedItem(Il2CppString* slotName);  // RVA: 0x544F10
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> GetCompatibleItems(Il2CppString* slotName);  // RVA: 0x544A50
        EquipSlot ParseSlotNameToEquipSlot(Il2CppString* slotName);  // RVA: 0x545050
        void .ctor();  // RVA: 0x5455A0
    };

} // namespace AutoBattle.Inventory

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<AutoBattle.Data.ItemInstance,System.Boolean> <>9__17_3;
    // static System.Func<AutoBattle.Data.ItemInstance,AutoBattle.Data.Rarity> <>9__17_0;


    // Methods
    static void .cctor();  // RVA: 0x55A460
    void .ctor();  // RVA: 0x4BD420
    bool <GetItemsByFilter>b__17_3(ItemInstance* i);  // RVA: 0x559680
    Rarity <GetItemsByFilter>b__17_0(ItemInstance* i);  // RVA: 0x5596D0
};

// Namespace: <global>
class <>c__DisplayClass16_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <RemoveItem>b__0(ItemInstance* i);  // RVA: 0x4D44B0
};

// Namespace: <global>
class <>c__DisplayClass17_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EquipSlot slotEnum; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetItemsByFilter>b__1(ItemInstance* i);  // RVA: 0x559830
};

// Namespace: <global>
class <>c__DisplayClass17_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Rarity rarityEnum; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetItemsByFilter>b__2(ItemInstance* i);  // RVA: 0x559C30
};

// Namespace: <global>
class <>c__DisplayClass18_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetEquippedItems>b__0(ItemInstance* i);  // RVA: 0x4D44B0
};

namespace AutoBattle.Inventory
{

    // Namespace: AutoBattle.Inventory
    class InventoryManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Action* OnInventoryChanged; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Action<System.String,AutoBattle.Data.ItemInstance> OnItemEquipped; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Action<System.String> OnItemUnequipped; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Action<AutoBattle.Data.ItemInstance> OnItemCrafted; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PlayerState* playerState; // 0x0040
    
        // Methods
        void add_OnInventoryChanged(Action* value);  // RVA: 0x54B0C0
        void remove_OnInventoryChanged(Action* value);  // RVA: 0x54B370
        void add_OnItemEquipped(System.Action<System.String,AutoBattle.Data.ItemInstance> value);  // RVA: 0x54B210
        void remove_OnItemEquipped(System.Action<System.String,AutoBattle.Data.ItemInstance> value);  // RVA: 0x54B4C0
        void add_OnItemUnequipped(System.Action<System.String> value);  // RVA: 0x54B2C0
        void remove_OnItemUnequipped(System.Action<System.String> value);  // RVA: 0x54B570
        void add_OnItemCrafted(System.Action<AutoBattle.Data.ItemInstance> value);  // RVA: 0x54B160
        void remove_OnItemCrafted(System.Action<AutoBattle.Data.ItemInstance> value);  // RVA: 0x54B410
        void Start();  // RVA: 0x54B060
        void NotifyInventoryChanged();  // RVA: 0x54AB40
        void AddItem(ItemInstance* item);  // RVA: 0x54A270
        void RemoveItem(int32_t uid);  // RVA: 0x54ABC0
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> GetItemsByFilter(Il2CppString* filter);  // RVA: 0x54A5F0
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> GetEquippedItems();  // RVA: 0x54A340
        void SellItem(int32_t uid);  // RVA: 0x54B050
        void RaiseItemEquipped(Il2CppString* slot, ItemInstance* item);  // RVA: 0x54AB80
        void RaiseItemUnequipped(Il2CppString* slot);  // RVA: 0x54ABA0
        void RaiseItemCrafted(ItemInstance* newItem);  // RVA: 0x54AB60
        void .ctor();  // RVA: 0x4E82E0
    };

} // namespace AutoBattle.Inventory

// Namespace: <global>
class <>c__DisplayClass3_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Rarity rarity; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GenerateItem>b__0(ItemData* t);  // RVA: 0x559850
};

// Namespace: <global>
class <>c__DisplayClass4_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t itemId; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GenerateSpecificItem>b__0(ItemData* t);  // RVA: 0x55A370
};

namespace AutoBattle.Inventory
{

    // Namespace: AutoBattle.Inventory
    class ItemGenerator : public MonoBehaviour
    {
    public:
        // Static fields
        // static ItemGenerator* instance;
    
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<AutoBattle.Data.ItemData> itemTemplates; // 0x0020
    
        // Methods
        void Awake();  // RVA: 0x54B970
        ItemInstance* GenerateItem(Rarity rarity, int32_t uid);  // RVA: 0x54BD40
        ItemInstance* GenerateSpecificItem(int32_t itemId, int32_t uid);  // RVA: 0x54BF20
        ItemInstance* GenerateItemBySector(SectorData* sector, int32_t uid);  // RVA: 0x54BB10
        ItemInstance* GenerateItemByLevel(int32_t level, int32_t uid);  // RVA: 0x54BA70
        ItemInstance* GenerateItemByLevel(int32_t level, int32_t uid, int32_t sectorIndex, int32_t dropCountInSector0);  // RVA: 0x54BAB0
        ItemInstance* GenerateItemBySector(SectorData* sector, int32_t uid, int32_t sectorIndex, int32_t dropCountInSector0);  // RVA: 0x54BC50
        Rarity RollRarityFromSector(SectorData* sector, int32_t sectorIndex, int32_t dropCountInSector0);  // RVA: 0x54C580
        Rarity RollRarityFromLevel(int32_t level);  // RVA: 0x54C370
        Rarity RollRarityFromLevelLegacy(int32_t level);  // RVA: 0x54C1B0
        void LoadTemplatesFromResources(Il2CppString* resourcePath);  // RVA: 0x54C110
        System.Collections.Generic.List<AutoBattle.Data.ItemData> GetTemplates();  // RVA: 0x54C0A0
        void SetTemplates(System.Collections.Generic.List<AutoBattle.Data.ItemData> templates);  // RVA: 0x4AE850
        void .ctor();  // RVA: 0x54C650
    };

} // namespace AutoBattle.Inventory

namespace AutoBattle.Data
{

    // Namespace: AutoBattle.Data
    class CraftingRecipe
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Rarity fromRarity; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        Rarity toRarity; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t cost; // 0x0018
    
        // Methods
        void .ctor(Rarity from, Rarity to, int32_t cost);  // RVA: 0x5433F0
    };

    // Namespace: AutoBattle.Data
    class EnemyCategoryData : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        Il2CppString* categoryName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* icon; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<AutoBattle.Data.EnemyVariantData> variants; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite[][] idleSprites; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float positionY; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float positionX; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        bool lungeEnabled; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        int32_t lungeStartFrame; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        int32_t lungeEndFrame; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float biteImpactDelaySec; // 0x004C
    
        // Methods
        void .ctor();  // RVA: 0x5444B0
    };

    // Namespace: AutoBattle.Data
    class EnemyVariantData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        EnemyColor color; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t hp; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        float atk; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float def; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float crit; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float parry; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int32_t level; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int32_t xpBase; // 0x002C
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.Data
    class FrameAnchorSet
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Vector2 head; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 body; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Vector2 weapon; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Vector2 weapon2; // 0x0028
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.Data
    class EquipAnchorData : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        float pixelScaleReference; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        FrameAnchorSet[][] idleFrames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        FrameAnchorSet[][] attackFrames; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        FrameAnchorSet[][] attack2Frames; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        FrameAnchorSet[][] attack3Frames; // 0x0038
    
        // Methods
        FrameAnchorSet* GetAnchors(bool isAttacking, int32_t frameIndex, int32_t attackVariant);  // RVA: 0x544540
        void .ctor();  // RVA: 0x5445D0
    };

    // Namespace: AutoBattle.Data
    class GameConstants
    {
    public:
        // Static fields
        // static int32_t BASE_HP;
        // static float BASE_ATK;
        // static float BASE_DEF;
        // static float BASE_CRIT;
        // static float BASE_PARRY;
        // static float LEVEL_SCALING_FACTOR;
        // static float XP_MULTIPLIER;
        // static float XP_EXPONENT;
        // static int32_t MAX_LEVEL;
        // static float XP_DEFEAT_MULTIPLIER;
        // static float XP_SCALING_PENALTY;
        // static float XP_SCALING_MIN;
        // static float DMG_RANDOM_MIN;
        // static float DMG_RANDOM_MAX;
        // static float CRIT_MULTIPLIER;
        // static float COMBAT_TURN_INTERVAL;
        // static Single[][] REGEN_BASELINE_PCT_BY_SECTOR;
        // static int32_t SAVE_WIPE_GENERATION;
        // static int32_t WIPE_GEN_FIELD_INTRODUCED;
        // static float STAMINA_COST_PER_BATTLE;
        // static float STAMINA_REGEN_PER_SEC;
        // static float STAMINA_MAX;
        // static float STAMINA_MIN_TO_BATTLE;
        // static float PVP_TIME_TRIGGER_SECONDS;
        // static int32_t PVP_XP_WIN;
        // static int32_t PVP_XP_LOSE;
        // static float PAUSE_BETWEEN_BATTLES;
        // static float PAUSE_BETWEEN_BATTLES_WITH_DROP;
        // static float PAUSE_AFTER_SECTOR_CLEAR;
        // static float PS_HP_WEIGHT;
        // static float PS_ATK_WEIGHT;
        // static float PS_DEF_WEIGHT;
        // static float PS_CRIT_WEIGHT;
        // static float PS_PARRY_WEIGHT;
        // static int32_t PITY_DROP_THRESHOLD;
        // static int32_t ARENA_ENEMIES_PER_WAVE;
        // static float PARRY_CAP;
        // static float CRIT_CAP;
        // static float MONO_SYNERGY_MULTIPLIER;
    
    
        // Methods
        static float GetRegenBaselinePct(int32_t sector);  // RVA: 0x545870
        static void .cctor();  // RVA: 0x545950
    };

    // Namespace: AutoBattle.Data
    struct Rarity
    {
    public:
        // Static fields
        // static Rarity Common;
        // static Rarity Rare;
        // static Rarity Epic;
        // static Rarity Legendary;
        // static Rarity Mythic;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct ElementCategory
    {
    public:
        // Static fields
        // static ElementCategory Nessuna;
        // static ElementCategory Arcane;
        // static ElementCategory Flame;
        // static ElementCategory Frost;
        // static ElementCategory Holy;
        // static ElementCategory Shadow;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct EquipSlot
    {
    public:
        // Static fields
        // static EquipSlot Testa;
        // static EquipSlot Corpo;
        // static EquipSlot Cintura;
        // static EquipSlot Arma;
        // static EquipSlot Anello1;
        // static EquipSlot Trinket;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct EnemyColor
    {
    public:
        // Static fields
        // static EnemyColor Verde;
        // static EnemyColor Giallo;
        // static EnemyColor Viola;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct CharacterType
    {
    public:
        // Static fields
        // static CharacterType Character1;
        // static CharacterType Character2;
        // static CharacterType Character3;
        // static CharacterType Character4;
        // static CharacterType Character5;
        // static CharacterType Character6;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct GameScreen
    {
    public:
        // Static fields
        // static GameScreen Creation;
        // static GameScreen Home;
        // static GameScreen Equip;
        // static GameScreen Inventory;
        // static GameScreen Battle;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    class ItemData : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        int32_t id; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* itemName; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        EquipSlot slot; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        Rarity rarity; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        ElementCategory category; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t hp; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float atk; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float def; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float crit; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float parry; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        bool isMelee; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.List<System.String> effects; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite* icon; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Sprite* overlaySprite; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Sprite[][] overlayAnimFrames; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite[][] iconAnimFrames; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        float overlayAnimFps; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        bool hasAttackOverlayAnim; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        Il2CppString* attackOverlaySpritesResource; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        float attackOverlayFps; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        AttackOverlayMode attackOverlayMode; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        Vector2 attackOverlayLocalOffset; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        bool hasProjectile; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        SpriteCollection* projectileSprites; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        SpriteCollection* projectileImpactSprites; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Vector2 projectileSpawnOffset; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Il2CppString* projectileSpritesResource; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Il2CppString* projectileImpactSpritesResource; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        float projectileTravelTime; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float projectileSize; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float projectileImpactSize; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float projectileImpactDuration; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        float projectileArcHeight; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        int32_t projectileCountPerAttack; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        float projectileSpreadOffset; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        float projectileSpreadDelay; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        bool projectileRotateToDirection; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        Color projectileTint; // 0x00EC
        uint8_t pad_00ED[0xF]; // 0x00ED
        Color projectileImpactTint; // 0x00FC
        uint8_t pad_00FD[0xF]; // 0x00FD
        float projectileSpawnDelay; // 0x010C
    
        // Methods
        SpriteCollection* GetProjectileSprites();  // RVA: 0x54B6D0
        SpriteCollection* GetProjectileImpactSprites();  // RVA: 0x54B620
        void .ctor();  // RVA: 0x54B780
    };

    // Namespace: AutoBattle.Data
    struct AttackOverlayMode
    {
    public:
        // Static fields
        // static AttackOverlayMode ReplaceWeaponSprite;
        // static AttackOverlayMode OverlayAbove;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    class ItemInstance
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t uid; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t templateId; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        Il2CppString* itemName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        EquipSlot slot; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        Rarity rarity; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        ElementCategory category; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int32_t hp; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float atk; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float def; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float crit; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float parry; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        String[][] effects; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        bool isNew; // 0x0048
    
        // Methods
        bool IsShield();  // RVA: 0x54C900
        static bool IsShieldName(Il2CppString* name);  // RVA: 0x54C7D0
        static ItemInstance* FromTemplate(ItemData* template, int32_t uniqueId);  // RVA: 0x54C6D0
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.Data
    struct PlayerStats
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hp; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        float atk; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        float def; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float crit; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float parry; // 0x0020
    
        // Methods
        static PlayerStats get_Zero();  // RVA: 0x54FC10
    };

    // Namespace: AutoBattle.Data
    class SectorData : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        int32_t sectorId; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* sectorName; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int32_t totalEnemies; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<AutoBattle.Data.EnemyCategoryData> categories; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float commonDropPct; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float rareDropPct; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float epicDropPct; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float legendaryDropPct; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float mythicDropPct; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        Rarity clearRewardRarity; // 0x004C
    
        // Methods
        int32_t get_PhaseSize();  // RVA: 0x552630
        void .ctor();  // RVA: 0x4B6FB0
    };

    // Namespace: AutoBattle.Data
    class TooltipSettings : public ScriptableObject
    {
    public:
        // Static fields
        // static TooltipSettings* _instance;
    
        uint8_t pad_0000[0x18]; // 0x0000
        float effectIndent; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float effectLineHeight; // 0x001C
    
        // Methods
        float get_EffectIndent();  // RVA: 0x558DE0
        float get_EffectLineHeight();  // RVA: 0x558DF0
        static TooltipSettings* get_Instance();  // RVA: 0x558E00
        void .ctor();  // RVA: 0x558DC0
    };

} // namespace AutoBattle.Data

// Namespace: <global>
class <CrossfadeCoroutine>d__23
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AmbienceManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AudioClip* newClip; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AudioSource* <fadingOut>5__2; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AudioSource* <fadingIn>5__3; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float <duration>5__4; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float <elapsed>5__5; // 0x0044

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x558ED0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x559240
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class AmbienceManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static AmbienceManager* <Instance>k__BackingField;
    
        uint8_t pad_0000[0x20]; // 0x0000
        AudioClip* homeClip; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AudioClip* outskirtsClip; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        AudioClip* graveyardClip; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        AudioClip* forestClip; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float crossfadeDuration; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float baseVolume; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        AudioSource* sourceA; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        AudioSource* sourceB; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        AudioSource* activeSrc; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Coroutine* crossfadeCoroutine; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        AudioClip* currentClip; // 0x0068
    
        // Methods
        static AmbienceManager* get_Instance();  // RVA: 0x542210
        static void set_Instance(AmbienceManager* value);  // RVA: 0x542250
        void Awake();  // RVA: 0x541A70
        void EnsureSourceDefaults(AudioSource* src);  // RVA: 0x541FC0
        void EnsureMixerRouting();  // RVA: 0x541DB0
        void PlaySectorAmbience(int32_t sectorIndex);  // RVA: 0x5421A0
        void PlayHomeAmbience();  // RVA: 0x542190
        void StopAmbience();  // RVA: 0x5421E0
        AudioClip* GetClipForSector(int32_t sectorIndex);  // RVA: 0x542170
        void CrossfadeTo(AudioClip* newClip);  // RVA: 0x541C90
        IEnumerator* CrossfadeCoroutine(AudioClip* newClip);  // RVA: 0x541C00
        void .ctor();  // RVA: 0x5421F0
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class <FadeHomeMusicCoroutine>d__63
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AudioManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float targetVolume; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float <startVolume>5__2; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float <duration>5__3; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <elapsed>5__4; // 0x0034

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x559280
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x559430
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class AudioManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static AudioManager* <Instance>k__BackingField;
        // static Il2CppString* KEY_MUSIC;
        // static Il2CppString* KEY_SFX;
        // static Il2CppString* KEY_MUTE;
        // static Il2CppString* PARAM_MUSIC;
        // static Il2CppString* PARAM_SFX;
        // static float MIN_LINEAR;
        // static float MIN_DB;
    
        uint8_t pad_0000[0x20]; // 0x0000
        AudioMixer* mixer; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AudioMixerGroup* musicMixerGroup; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        AudioMixerGroup* sfxMixerGroup; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float musicVolume; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float sfxVolume; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        bool isMuted; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        AudioSource* musicSource; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        bool itemPopupToggle; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        AudioClip* damageSfx; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        AudioClip* parrySfx; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        AudioClip* enemyKillSfx; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        AudioClip* playerDeathSfx; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        AudioClip* levelCompleteSfx; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        AudioClip* vsSfx; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        AudioClip* attackSfx1; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        AudioClip* attackSfx2; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        AudioClip* itemPopupSfx1; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        AudioClip* itemPopupSfx2; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        AudioClip* homeMusic; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        float homeMusicVolume; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        float homeMusicFadeDuration; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        AudioSource* homeMusicSource; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Coroutine* homeMusicFadeCoroutine; // 0x00C0
    
        // Methods
        static AudioManager* get_Instance();  // RVA: 0x543320
        static void set_Instance(AudioManager* value);  // RVA: 0x543390
        float get_MusicVolume();  // RVA: 0x543370
        float get_SFXVolume();  // RVA: 0x543380
        bool get_IsMuted();  // RVA: 0x543360
        AudioMixerGroup* get_MusicMixerGroup();  // RVA: 0x533BB0
        AudioMixerGroup* get_SFXMixerGroup();  // RVA: 0x533BC0
        void Awake();  // RVA: 0x5423D0
        void SetMusicVolume(float value);  // RVA: 0x543010
        void SetSFXVolume(float value);  // RVA: 0x543110
        void SetMuteAll(bool muted);  // RVA: 0x5430A0
        void RegisterMusicSource(AudioSource* source);  // RVA: 0x542EE0
        void PlaySFX(AudioClip* clip);  // RVA: 0x542BE0
        void PlayDamageSfx();  // RVA: 0x542A00
        void PlayParrySfx();  // RVA: 0x542BC0
        void PlayEnemyKillSfx();  // RVA: 0x542A10
        void PlayPlayerDeathSfx();  // RVA: 0x542BD0
        void PlayLevelCompleteSfx();  // RVA: 0x542BB0
        void PlayAttackSfx1();  // RVA: 0x5429E0
        void PlayAttackSfx2();  // RVA: 0x5429F0
        void PlayItemPopupSfx();  // RVA: 0x542B70
        void PlayVsSfx();  // RVA: 0x542ED0
        void EnsureHomeMusicSourceDefaults();  // RVA: 0x542700
        void PlayHomeMusic();  // RVA: 0x542A20
        void StopHomeMusic();  // RVA: 0x543260
        void StartHomeMusicFade(float targetVolume);  // RVA: 0x5431A0
        IEnumerator* FadeHomeMusicCoroutine(float targetVolume);  // RVA: 0x542860
        void ApplyVolumes();  // RVA: 0x5422B0
        static float LinearToDb(float linear);  // RVA: 0x5428E0
        void SaveSettings();  // RVA: 0x542FA0
        void LoadSettings();  // RVA: 0x542940
        void .ctor();  // RVA: 0x5432F0
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Predicate<AutoBattle.Data.ItemData> <>9__73_0;


    // Methods
    static void .cctor();  // RVA: 0x55A3F0
    void .ctor();  // RVA: 0x4BD420
    bool <StartNewGame>b__73_0(ItemData* item);  // RVA: 0x5596F0
};

// Namespace: <global>
class <>c__DisplayClass77_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <RefreshInventoryNames>b__0(ItemData* t);  // RVA: 0x4BD430
};

// Namespace: <global>
class <Start>d__57
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameManager* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x559470
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x559610
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class GameManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static GameManager* <Instance>k__BackingField;
        // static float SNAPSHOT_REFRESH_INTERVAL_SEC;
        // static bool <DebugFastPvP>k__BackingField;
        // static bool <DebugAlwaysBifidus>k__BackingField;
    
        uint8_t pad_0000[0x20]; // 0x0000
        bool isDemo; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<AutoBattle.Data.SectorData> sectors; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PlayerState* playerState; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        GameScreen currentScreen; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        ItemGenerator* itemGenerator; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Action<AutoBattle.Data.GameScreen> OnScreenChanged; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Action* OnGameStateChanged; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Action* OnEquipmentChanged; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Action* OnStartPvEBattle; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Action* OnStartPvPBattle; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Action<AutoBattle.Data.GameScreen> OnScreenChange; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Action<System.String,System.String> OnNotification; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        System.Action<System.Boolean> OnBattleStateChange; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Action* OnStaminaDepleted; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        System.Action<System.String> OnSteamInitialized; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        float pvpTimer; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float snapshotRefreshTimer; // 0x00A4
    
        // Methods
        static GameManager* get_Instance();  // RVA: 0x5499B0
        static void set_Instance(GameManager* value);  // RVA: 0x54A210
        static bool get_IsDemo();  // RVA: 0x5499F0
        static int32_t get_EffectiveMaxLevel();  // RVA: 0x549930
        int32_t get_EffectiveSectorCount();  // RVA: 0x549960
        void add_OnScreenChanged(System.Action<AutoBattle.Data.GameScreen> value);  // RVA: 0x549540
        void remove_OnScreenChanged(System.Action<AutoBattle.Data.GameScreen> value);  // RVA: 0x549E30
        void add_OnGameStateChanged(Action* value);  // RVA: 0x549330
        void remove_OnGameStateChanged(Action* value);  // RVA: 0x549C20
        void add_OnEquipmentChanged(Action* value);  // RVA: 0x549290
        void remove_OnEquipmentChanged(Action* value);  // RVA: 0x549B80
        void add_OnStartPvEBattle(Action* value);  // RVA: 0x5496A0
        void remove_OnStartPvEBattle(Action* value);  // RVA: 0x549F90
        void add_OnStartPvPBattle(Action* value);  // RVA: 0x549740
        void remove_OnStartPvPBattle(Action* value);  // RVA: 0x54A030
        void add_OnScreenChange(System.Action<AutoBattle.Data.GameScreen> value);  // RVA: 0x549490
        void remove_OnScreenChange(System.Action<AutoBattle.Data.GameScreen> value);  // RVA: 0x549D80
        void add_OnNotification(System.Action<System.String,System.String> value);  // RVA: 0x5493D0
        void remove_OnNotification(System.Action<System.String,System.String> value);  // RVA: 0x549CC0
        void add_OnBattleStateChange(System.Action<System.Boolean> value);  // RVA: 0x5491D0
        void remove_OnBattleStateChange(System.Action<System.Boolean> value);  // RVA: 0x549AC0
        void add_OnStaminaDepleted(Action* value);  // RVA: 0x5495F0
        void remove_OnStaminaDepleted(Action* value);  // RVA: 0x549EE0
        void add_OnSteamInitialized(System.Action<System.String> value);  // RVA: 0x5497E0
        void remove_OnSteamInitialized(System.Action<System.String> value);  // RVA: 0x54A0D0
        System.Collections.Generic.List<AutoBattle.Data.ItemData> get_AllItems();  // RVA: 0x533BB0
        System.Collections.Generic.List<AutoBattle.Data.SectorData> get_Sectors();  // RVA: 0x533BC0
        GameScreen get_CurrentScreen();  // RVA: 0x5498A0
        ItemGenerator* get_ItemGenerator();  // RVA: 0x549AB0
        void Awake();  // RVA: 0x545A30
        void ApplyForcedSaveWipeIfNeeded();  // RVA: 0x5459E0
        void DeduplicateAllItems();  // RVA: 0x546730
        IEnumerator* Start();  // RVA: 0x548C60
        static bool get_DebugFastPvP();  // RVA: 0x5498F0
        static void set_DebugFastPvP(bool value);  // RVA: 0x54A1D0
        static bool get_DebugAlwaysBifidus();  // RVA: 0x5498B0
        static void set_DebugAlwaysBifidus(bool value);  // RVA: 0x54A190
        void Update();  // RVA: 0x548D90
        void TriggerPvPBattle();  // RVA: 0x548D60
        void ShowScreen(GameScreen screen);  // RVA: 0x5484C0
        void ClearNewBadges();  // RVA: 0x5460A0
        void StartNewGame(Il2CppString* name, CharacterType characterType);  // RVA: 0x5485D0
        void ResetGame();  // RVA: 0x548210
        void SaveGame();  // RVA: 0x548460
        void LoadGame();  // RVA: 0x547960
        void RefreshInventoryNames();  // RVA: 0x547F50
        SectorData* GetCurrentSector();  // RVA: 0x546AC0
        bool IsBattleActive();  // RVA: 0x5477A0
        void StartBattle();  // RVA: 0x548520
        void StopBattle();  // RVA: 0x548CD0
        void GoToEquipScreen();  // RVA: 0x546D90
        void GoToInventoryScreen();  // RVA: 0x546DF0
        bool IsGameOver();  // RVA: 0x5477C0
        void RequestNextBattle();  // RVA: 0x5481D0
        void DebugSetSector(int32_t sectorIndex);  // RVA: 0x5464D0
        void DebugEnterArena();  // RVA: 0x5461B0
        void DebugSelectSectorOrArena(int32_t index);  // RVA: 0x546310
        void ShowNotification(Il2CppString* message, Il2CppString* type);  // RVA: 0x5484A0
        void OnApplicationQuit();  // RVA: 0x547C50
        void OnDisable();  // RVA: 0x547C90
        void OnApplicationPause(bool pauseStatus);  // RVA: 0x547C00
        void InitializeWindowManager();  // RVA: 0x547420
        void InitializeAudioManager();  // RVA: 0x546E50
        void InitializePlayFab();  // RVA: 0x546F30
        void OnPlayFabLoginSuccess();  // RVA: 0x547D20
        void InitializeRanking();  // RVA: 0x547210
        void OnPlayFabLoginFailed(Il2CppString* error);  // RVA: 0x547CA0
        void NotifySnapshotUpload();  // RVA: 0x547AF0
        void NotifyEquipmentChanged();  // RVA: 0x547AD0
        bool IsPlayFabAvailable();  // RVA: 0x5477E0
        void EnsureCanvasScalerDPI();  // RVA: 0x546A30
        void InitializeSteam();  // RVA: 0x547340
        Il2CppString* GetSteamPlayerName();  // RVA: 0x546C60
        uint64_t GetSteamId();  // RVA: 0x546B60
        bool IsSteamAvailable();  // RVA: 0x5478A0
        void .ctor();  // RVA: 0x549100
    };

    // Namespace: AutoBattle.Core
    class LocalizationManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static LocalizationManager* _instance;
        // static Il2CppString* PREF_LANGUAGE_INDEX;
        // static Il2CppString* DEFAULT_LANGUAGE_CODE;
        // static Il2CppString* RESOURCES_FOLDER;
        // static bool _isQuitting;
        // static String[][] LanguageCodes;
    
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.Dictionary<System.String,System.String> entries; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.Dictionary<System.String,System.String> fallbackEntries; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Il2CppString* currentLanguageCode; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        bool isLoaded; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Collections.Generic.HashSet<System.String> warnedMissingKeys; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Action* OnLanguageChanged; // 0x0048
    
        // Methods
        static void ResetStatics();  // RVA: 0x54DC00
        static LocalizationManager* get_Instance();  // RVA: 0x54E720
        void add_OnLanguageChanged(Action* value);  // RVA: 0x54E630
        void remove_OnLanguageChanged(Action* value);  // RVA: 0x54E9A0
        Il2CppString* get_CurrentLanguage();  // RVA: 0x533BC0
        bool get_IsLoaded();  // RVA: 0x54E990
        static System.Collections.Generic.IReadOnlyList<System.String> get_AvailableLanguages();  // RVA: 0x54E6D0
        void Awake();  // RVA: 0x54CA30
        void OnApplicationQuit();  // RVA: 0x54DAD0
        void OnDestroy();  // RVA: 0x54DB20
        void EnsureLoaded();  // RVA: 0x54CC00
        void SetLanguage(Il2CppString* langCode);  // RVA: 0x54DF20
        void SetLanguageByIndex(int32_t index);  // RVA: 0x54DD40
        static System.Collections.Generic.List<System.Int32> GetAvailableLanguageIndices();  // RVA: 0x54CD10
        Il2CppString* Get(Il2CppString* key);  // RVA: 0x54D400
        Il2CppString* Get(Il2CppString* key, Object[][] args);  // RVA: 0x54D690
        Il2CppString* GetEffectText(Il2CppString* canonicalEnglishEffect);  // RVA: 0x54CEC0
        static Il2CppString* ComputeEffectSlug(Il2CppString* canonical);  // RVA: 0x54CBB0
        Il2CppString* GetItemName(Il2CppString* canonicalEnglishName);  // RVA: 0x54D160
        Il2CppString* GetEnemyName(Il2CppString* canonicalEnglishName);  // RVA: 0x54D010
        Il2CppString* GetSectorName(Il2CppString* canonicalEnglishName);  // RVA: 0x54D2B0
        void LoadLanguageInternal(Il2CppString* langCode);  // RVA: 0x54D9D0
        static System.Collections.Generic.Dictionary<System.String,System.String> LoadLanguageDictionary(Il2CppString* langCode);  // RVA: 0x54D780
        static Il2CppString* ResolveCodeFromIndex(int32_t index);  // RVA: 0x54DC80
        static Il2CppString* Slugify(Il2CppString* source);  // RVA: 0x54E0C0
        void .ctor();  // RVA: 0x54E540
        static void .cctor();  // RVA: 0x54E290
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class <>c__DisplayClass42_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetEquippedItem>b__0(ItemInstance* item);  // RVA: 0x4D44B0
};

// Namespace: <global>
class <>c__DisplayClass45_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* item; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetElementSynergies>b__0(ItemInstance* it);  // RVA: 0x4D44B0
    bool <GetElementSynergies>b__1(ItemData* it);  // RVA: 0x4D44D0
};

// Namespace: <global>
class <>c__DisplayClass46_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetItemByUid>b__0(ItemInstance* item);  // RVA: 0x4D44B0
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class PlayerState
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* name; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        CharacterType characterType; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t level; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t xp; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float stamina; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int32_t currentSector; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int32_t sectorEnemy; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        Boolean[][] sectorCleared; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t currentHp; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> inventory; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<System.String> equippedSlots; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.List<System.Int32> equippedUids; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float lastPvPTime; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        bool battleActive; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        int32_t nextUid; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float totalBattleTime; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        int32_t sector0DropCount; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        int32_t killsWithoutDrop; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        int32_t appliedWipeGeneration; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        int32_t bifidusPvpCounter; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        bool bifidusFirstSeen; // 0x0078
        bool bifidusDefeated; // 0x0079
        bool endlessMode; // 0x007A
        uint8_t pad_007B[0x1]; // 0x007B
        int32_t waveIndex; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        int32_t waveKillCount; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        int32_t maxWaveRecord; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        int32_t unspentStatPoints; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        int32_t allocatedHp; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        int32_t allocatedAtk; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        int32_t allocatedDef; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        int32_t allocatedCrit; // 0x0098
        uint8_t pad_0099[0x3]; // 0x0099
        int32_t allocatedParry; // 0x009C
        uint8_t pad_009D[0x3]; // 0x009D
        Il2CppString* runId; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        float sectorEnteredBattleTime; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        int32_t deathsInSectorPersistent; // 0x00AC
    
        // Methods
        void EnsureAnalyticsRunFields();  // RVA: 0x54EAE0
        System.Collections.Generic.Dictionary<System.String,System.Int32> get_equipped();  // RVA: 0x54F840
        void set_equipped(System.Collections.Generic.Dictionary<System.String,System.Int32> value);  // RVA: 0x54F960
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> get_Inventory();  // RVA: 0x54F830
        int32_t GenerateUid();  // RVA: 0x54ED20
        ItemInstance* GetEquippedItem(Il2CppString* slot);  // RVA: 0x54F300
        void EquipItem(Il2CppString* slot, ItemInstance* item);  // RVA: 0x54EB80
        void UnequipSlot(Il2CppString* slot);  // RVA: 0x54F670
        System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,System.Int32> GetElementSynergies(System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x54ED30
        ItemInstance* GetItemByUid(int32_t uid);  // RVA: 0x54F440
        bool IsItemEquipped(int32_t uid);  // RVA: 0x54F520
        int32_t AddXP(int32_t amount);  // RVA: 0x54EA40
        void .ctor();  // RVA: 0x54F720
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class BelowHpEffect
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float thresholdPct; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float bonusAtkPct; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float bonusDefPct; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float bonusCritPct; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t regenHpPerTick; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    bool immune; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    int32_t immuneSeconds; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float lifeStealPct; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float absorbDamagePct; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t bonusAtkFlat; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int32_t bonusToAllStatsFlat; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    int32_t bonusDamagePerAttack; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    int32_t regenPerAttack; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t regenPerCrit; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float attackLifestealPct; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    bool immuneToCrits; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float permanentDefPct; // 0x0050

    // Methods
    void .ctor();  // RVA: 0x4BD420
};

// Namespace: <global>
class <>c__DisplayClass11_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instance; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <GetTotalStats>b__0(ItemInstance* item);  // RVA: 0x4D44B0
    bool <GetTotalStats>b__1(ItemData* item);  // RVA: 0x4D44D0
};

// Namespace: <global>
class <>c__DisplayClass16_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instance; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <CalcRegenPerFight>b__0(ItemInstance* item);  // RVA: 0x4D44B0
    bool <CalcRegenPerFight>b__1(ItemData* item);  // RVA: 0x4D44D0
};

// Namespace: <global>
class <>c__DisplayClass17_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* pattern; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<System.ValueTuple<System.Single,System.Int32>> result; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcTimedRegen>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x559870
};

// Namespace: <global>
class <>c__DisplayClass18_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* pattern; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Int32,System.String>> result; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcEveryNSecTemporaryBuffs>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x559C50
};

// Namespace: <global>
class <>c__DisplayClass19_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t idx; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Int32[][] caps; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcEveryNSecMaxStack>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x55A080
};

// Namespace: <global>
class <>c__DisplayClass20_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Combat.EveryNAttacksEffect> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcEveryNAttacks>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5653E0
};

// Namespace: <global>
class <>c__DisplayClass21_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Combat.EveryNCritsEffect> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcEveryNCrits>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x565B50
};

// Namespace: <global>
class <>c__DisplayClass22_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcOnCritBonusDamage>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x565DA0
};

// Namespace: <global>
class <>c__DisplayClass23_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcOnCritPendingMods>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x566110
};

// Namespace: <global>
class <>c__DisplayClass24_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcOnCritEnemyDefDebuff>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5664D0
};

// Namespace: <global>
class <>c__DisplayClass25_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcOnCritDefTimed>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x566690
};

// Namespace: <global>
class <>c__DisplayClass26_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcOnParryPendingMods>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x566890
};

// Namespace: <global>
class <>c__DisplayClass27_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcOnParryDefTimed>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5670B0
};

// Namespace: <global>
class <>c__DisplayClass28_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcFirstHitHeal>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5673B0
};

// Namespace: <global>
class <>c__DisplayClass29_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sum; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcFirstHitPermanentAtkPct>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5676A0
};

// Namespace: <global>
class <>c__DisplayClass30_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instance; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <ForEachEquippedEffect>b__0(ItemInstance* item);  // RVA: 0x4D44B0
    bool <ForEachEquippedEffect>b__1(ItemData* item);  // RVA: 0x4D44D0
};

// Namespace: <global>
class <>c__DisplayClass31_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sumPct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcStaminaCostMultiplier>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x567830
};

// Namespace: <global>
class <>c__DisplayClass32_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sumPct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcStaminaRestRegenMultiplier>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x567970
};

// Namespace: <global>
class <>c__DisplayClass33_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sumPct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcBonusDropChance>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x567AB0
};

// Namespace: <global>
class <>c__DisplayClass34_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sumPct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcEnemyCritDamageReductionMultiplier>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x567BF0
};

// Namespace: <global>
class <>c__DisplayClass36_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Core.StatsCalculator.BelowHpEffect> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcBelowHpEffects>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x567D30
};

// Namespace: <global>
class <>c__DisplayClass37_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcOnCritHealAmount>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x569270
};

// Namespace: <global>
class <>c__DisplayClass38_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float pct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcOnCritLifesteal>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x569520
};

// Namespace: <global>
class <>c__DisplayClass39_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcOnParryHealAmount>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x569810
};

// Namespace: <global>
class <>c__DisplayClass40_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float pct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcFirstHitAbsorbFraction>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x569AC0
};

// Namespace: <global>
class <>c__DisplayClass41_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcFirstHitCounterDamage>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x56A0A0
};

// Namespace: <global>
class <>c__DisplayClass42_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String>> list; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    void <CalcEveryNHitsTaken>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x56A350
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class StatsCalculator
    {
    public:
        // Static fields
        // static int32_t BaseHP;
        // static int32_t BaseATK;
        // static int32_t BaseDEF;
        // static float BaseCRIT;
        // static float BasePARRY;
        // static float AtkPerPoint;
        // static float HpPerPoint;
        // static float DefPerPoint;
        // static float CritPercentPerPoint;
        // static float ParryPercentPerPoint;
    
    
        // Methods
        static PlayerStats GetBaseStats(int32_t level);  // RVA: 0x5570E0
        static PlayerStats GetTotalStats(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x557290
        static void ApplySynergyBonuses(Il2CppString* effectDescription, System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,System.Int32> elementalCounts, PlayerStats stats);  // RVA: 0x5544E0
        static void ApplyCrossSynergyBonuses(Il2CppString* effectDescription, System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,System.Int32> elementalCounts, System.Collections.Generic.HashSet<System.String> equippedItemNames, bool hasDualWield, bool hasShield, int32_t categoryCount, PlayerStats stats);  // RVA: 0x553CA0
        static ElementCategory GetCategoryFromName(Il2CppString* name);  // RVA: 0x557110
        static int32_t GetPowerScore(PlayerStats stats);  // RVA: 0x557230
        static int32_t CalcRegenPerFight(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5562D0
        static System.Collections.Generic.List<System.ValueTuple<System.Single,System.Int32>> CalcTimedRegen(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x556B60
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Int32,System.String>> CalcEveryNSecTemporaryBuffs(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5553C0
        static Int32[][] CalcEveryNSecMaxStack(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Int32,System.String>> everyNSecTempBuffs);  // RVA: 0x555280
        static System.Collections.Generic.List<AutoBattle.Combat.EveryNAttacksEffect> CalcEveryNAttacks(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554ED0
        static System.Collections.Generic.List<AutoBattle.Combat.EveryNCritsEffect> CalcEveryNCrits(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555010
        static int32_t CalcOnCritBonusDamage(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555910
        static System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> CalcOnCritPendingMods(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555E50
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> CalcOnCritEnemyDefDebuff(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555B30
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> CalcOnCritDefTimed(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555A00
        static System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> CalcOnParryPendingMods(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5561A0
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> CalcOnParryDefTimed(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555F80
        static int32_t CalcFirstHitHeal(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555730
        static float CalcFirstHitPermanentAtkPct(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555820
        static void ForEachEquippedEffect(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, System.Action<AutoBattle.Data.ItemData,System.String> callback);  // RVA: 0x556CC0
        static float CalcStaminaCostMultiplier(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x556920
        static float CalcStaminaRestRegenMultiplier(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x556A50
        static float CalcBonusDropChance(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554CA0
        static float CalcEnemyCritDamageReductionMultiplier(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554DA0
        static System.Collections.Generic.List<AutoBattle.Core.StatsCalculator.BelowHpEffect> CalcBelowHpEffects(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554B70
        static int32_t CalcOnCritHealAmount(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555C60
        static float CalcOnCritLifesteal(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555D50
        static int32_t CalcOnParryHealAmount(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5560B0
        static float CalcFirstHitAbsorbFraction(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555520
        static int32_t CalcFirstHitCounterDamage(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555640
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String>> CalcEveryNHitsTaken(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555150
        static void .cctor();  // RVA: 0x557FD0
    };

    // Namespace: AutoBattle.Core
    class TransparentWindowHelper : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Camera* targetCamera; // 0x0020
    
        // Methods
        void OnEnable();  // RVA: 0x561B80
        void OnDisable();  // RVA: 0x561B10
        void OnEndCameraRendering(ScriptableRenderContext context, Camera* camera);  // RVA: 0x561C20
        void .ctor();  // RVA: 0x4E82E0
    };

    // Namespace: AutoBattle.Core
    class UIAudioManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static UIAudioManager* <Instance>k__BackingField;
    
        uint8_t pad_0000[0x20]; // 0x0000
        AudioClip* clickClip; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AudioClip* hoverClip; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Vector2 hoverPitchRange; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        AudioSource* uiSource; // 0x0038
    
        // Methods
        static UIAudioManager* get_Instance();  // RVA: 0x56B0A0
        static void set_Instance(UIAudioManager* value);  // RVA: 0x56B0E0
        void Awake();  // RVA: 0x56AA10
        void EnsureSourceDefaults();  // RVA: 0x56AD00
        void EnsureMixerRouting();  // RVA: 0x56AB80
        void PlayClick();  // RVA: 0x56AED0
        void PlayHover();  // RVA: 0x56AFA0
        void .ctor();  // RVA: 0x56B080
    };

} // namespace AutoBattle.Core

// Namespace: <global>
struct WindowSize
{
public:
    // Static fields
    // static WindowSize Small;
    // static WindowSize Medium;
    // static WindowSize Large;
    // static WindowSize XLarge;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class WindowManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static WindowManager* <Instance>k__BackingField;
        // static float GAME_FRAME_REF_WIDTH;
        // static float GAME_FRAME_REF_HEIGHT;
        // static int32_t SNAP_MARGIN_PX;
        // static Vector2Int[][] SizePresets;
        // static Color ColorKey;
    
        uint8_t pad_0000[0x20]; // 0x0000
        WindowSize <CurrentSize>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Action<AutoBattle.Core.WindowManager.WindowSize> OnWindowSizeChanged; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int32_t <SidePanelWidth>k__BackingField; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t <TooltipOverflowWidth>k__BackingField; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        System.Action<System.Int32> OnSidePanelWidthChanged; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool <IsTransparencyEnabled>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        RectTransform* <GameFrameRoot>k__BackingField; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        bool isInitialized; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        UniWindowController* _uniWin; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        CanvasScaler* _canvasScaler; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        CanvasScaler* _worldCanvasScaler; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        int32_t _currentMonitorIdx; // 0x0070
    
        // Methods
        static WindowManager* get_Instance();  // RVA: 0x56CEE0
        static void set_Instance(WindowManager* value);  // RVA: 0x56D0D0
        WindowSize get_CurrentSize();  // RVA: 0x56CEC0
        void set_CurrentSize(WindowSize value);  // RVA: 0x56D0B0
        void add_OnWindowSizeChanged(System.Action<AutoBattle.Core.WindowManager.WindowSize> value);  // RVA: 0x56CCC0
        void remove_OnWindowSizeChanged(System.Action<AutoBattle.Core.WindowManager.WindowSize> value);  // RVA: 0x56D000
        int32_t get_SidePanelWidth();  // RVA: 0x56CF30
        void set_SidePanelWidth(int32_t value);  // RVA: 0x56D150
        int32_t get_TooltipOverflowWidth();  // RVA: 0x56CF40
        void set_TooltipOverflowWidth(int32_t value);  // RVA: 0x56D160
        int32_t get_EffectiveLeftExtension();  // RVA: 0x56CED0
        void add_OnSidePanelWidthChanged(System.Action<System.Int32> value);  // RVA: 0x56CC10
        void remove_OnSidePanelWidthChanged(System.Action<System.Int32> value);  // RVA: 0x56CF50
        bool get_IsTransparencyEnabled();  // RVA: 0x543360
        void set_IsTransparencyEnabled(bool value);  // RVA: 0x56D140
        RectTransform* get_GameFrameRoot();  // RVA: 0x549AB0
        void set_GameFrameRoot(RectTransform* value);  // RVA: 0x56D0C0
        RectTransform* get_CanvasRect();  // RVA: 0x56CD70
        void Awake();  // RVA: 0x56B3B0
        void Start();  // RVA: 0x56C480
        void InitializeWindow();  // RVA: 0x56BC50
        float get_CurrentScaleFactor();  // RVA: 0x56CE30
        void Update();  // RVA: 0x4B53F0
        void CycleSize();  // RVA: 0x56BAF0
        void SetSize(WindowSize size);  // RVA: 0x56C170
        void ApplyGameFrameScale();  // RVA: 0x56B140
        void SetAlwaysOnTop(bool onTop);  // RVA: 0x56C0B0
        void SnapToCorner(int32_t corner);  // RVA: 0x56C230
        void ClampGameFrameToCanvas();  // RVA: 0x56B8E0
        void ClampGameFrameContentToCanvas();  // RVA: 0x56B5C0
        int32_t get_CurrentMonitorIndex();  // RVA: 0x56CE20
        bool TryMoveToAdjacentMonitor(Vector2 direction, Vector2 outOppositeEdgePos);  // RVA: 0x56C490
        Rect GetCurrentMonitorRect();  // RVA: 0x56BBF0
        void EnableColorKeyTransparency();  // RVA: 0x4B53F0
        void SetSidePanelExtension(int32_t panelWidth);  // RVA: 0x56C140
        void SetTooltipExtension(int32_t overflowPx);  // RVA: 0x56C220
        void SetTooltipExtension(int32_t overflowPx, bool rightSide);  // RVA: 0x56C220
        void RetractTooltipExtensionDeferred();  // RVA: 0x56C0A0
        Vector2Int GetWindowPixelSize();  // RVA: 0x56BC20
        Vector2Int GetWindowPosition();  // RVA: 0x55A630
        bool IsGameFrameInUpperHalfOfScreen();  // RVA: 0x56C000
        void .ctor();  // RVA: 0x56CC00
        static void .cctor();  // RVA: 0x56CAE0
    };

    // Namespace: AutoBattle.Core
    class XPSystem
    {
    public:
        // Static fields
        // static int32_t MaxLevel;
        // static float XPMultiplierFullGame;
        // static float XPMultiplierDemo;
        // static float XPExponent;
        // static float XPScalingDecay;
    
    
        // Methods
        static float get_CurrentMultiplier();  // RVA: 0x56D280
        static int32_t XPForLevel(int32_t level);  // RVA: 0x56D1D0
        static int32_t XPNeededForNextLevel(int32_t currentLevel);  // RVA: 0x56D240
        static int32_t ScaleXP(int32_t baseXP, int32_t enemyLevel, int32_t playerLevel);  // RVA: 0x56D170
    };

} // namespace AutoBattle.Core

namespace AutoBattle.Combat
{

    // Namespace: AutoBattle.Combat
    class BifidusEncounter
    {
    public:
        // Static fields
        // static Int32[][] DropMythicIds;
        // static int32_t FirstThreshold;
        // static int32_t SubsequentThreshold;
        // static int32_t RequiredLevel;
        // static int32_t BossHp;
        // static float BossAtk;
        // static float BossDef;
        // static float BossCrit;
        // static float BossParry;
    
    
        // Methods
        static int32_t ThresholdFor(PlayerState* p);  // RVA: 0x55B020
        static bool ShouldTrigger(PlayerState* p);  // RVA: 0x55AF50
        static void CountNormalPvpMatch(PlayerState* p);  // RVA: 0x55ADB0
        static void OnAppear(PlayerState* p);  // RVA: 0x55AEB0
        static int32_t RandomDropMythicId();  // RVA: 0x55AED0
        static EnemyState* Build(PlayerState* p);  // RVA: 0x55AC70
        static System.Collections.Generic.List<AutoBattle.Steam.EquippedItemInfo> BuildLoadout();  // RVA: 0x55A720
        static EquippedItemInfo* MakeItem(Il2CppString* slot, Il2CppString* name, Il2CppString* rarity, Il2CppString* category);  // RVA: 0x55ADE0
        static void .cctor();  // RVA: 0x55B040
    };

} // namespace AutoBattle.Combat

// Namespace: <global>
class <>c__DisplayClass54_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EquippedItemInfo* ei; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BD420
    bool <BuildSyntheticEnemyState>b__0(ItemData* d);  // RVA: 0x56A980
};

// Namespace: <global>
class <EndBattle>d__56
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CombatManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    EnemyState* enemy; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool playerWon; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t remainingPlayerHp; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    BattleScreenUI* <battleUI>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float <pollWaited>5__3; // 0x0040

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x561D50
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x563F60
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <RunCombat>d__51
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    EnemyState* enemy; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CombatManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    PlayerStats playerStats; // 0x0030
    uint8_t pad_0031[0x17]; // 0x0031
    BattleScreenUI* <battleUI>5__2; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    int32_t <playerHp>5__3; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    int32_t <enemyHp>5__4; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    bool <isPlayerTurn>5__5; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    PlayerStats <playerMaxStats>5__6; // 0x005C
    uint8_t pad_005D[0x13]; // 0x005D
    System.Collections.Generic.List<System.ValueTuple<System.Single,System.Int32>> <timedRegens>5__7; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    float <combatElapsed>5__8; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Single[][] <nextRegenAt>5__9; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.List<System.ValueTuple<System.Single,System.Int32>> <enemyTimedRegens>5__10; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Single[][] <enemyNextRegenAt>5__11; // 0x0090

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x563FA0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x564BC0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

// Namespace: <global>
class <StartPvPBattleCoroutine>d__36
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CombatManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t <myPS>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float <timeout>5__3; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float <elapsed>5__4; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B74E0
    void System.IDisposable.Dispose();  // RVA: 0x4B53F0
    bool MoveNext();  // RVA: 0x564C00
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B7490
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5653A0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B7490
};

namespace AutoBattle.Combat
{

    // Namespace: AutoBattle.Combat
    class CombatManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameManager* gameManager; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Coroutine* combatCoroutine; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool isInCombat; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        EnemyState* currentCombatEnemy; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        CombatRuntimeEffects* activeRuntimeEffects; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        CombatRuntimeEffects* enemyRuntimeEffects; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        int32_t currentEnemyHpTracked; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        int32_t currentEnemyMaxHpTracked; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        EnemyState* cachedSectorEnemy; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        int32_t cachedSectorEnemySector; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        int32_t cachedSectorEnemySlot; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        System.Action<AutoBattle.Combat.EnemyState> OnCombatStart; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        System.Action<AutoBattle.Combat.CombatTurnResult> OnCombatTurn; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Action<AutoBattle.Combat.CombatResult> OnCombatEnd; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Action<System.String,System.String> OnBattleLogMessage; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        System.Action<System.Int32> OnHealTick; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        System.Action<System.Int32> OnEnemyHealTick; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        String[][] pvpEnemyNames; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        bool pvpQueued; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        int32_t pvpSavedHp; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        bool friendlyPvPStartedFromHome; // 0x00A8
    
        // Methods
        CombatRuntimeEffects* get_ActiveRuntimeEffects();  // RVA: 0x54F830
        CombatRuntimeEffects* get_EnemyRuntimeEffects();  // RVA: 0x549AB0
        int32_t get_CurrentEnemyHp();  // RVA: 0x55F660
        int32_t get_CurrentEnemyMaxHp();  // RVA: 0x55F670
        void Start();  // RVA: 0x55EFC0
        void OnEnable();  // RVA: 0x55C130
        void OnDisable();  // RVA: 0x55C110
        void SubscribeEvents();  // RVA: 0x55F130
        void UnsubscribeEvents();  // RVA: 0x55F270
        void StartPvEBattle();  // RVA: 0x55EB90
        void StartArenaBattle();  // RVA: 0x55E770
        EnemyState* PickEnemyForArena(int32_t wave);  // RVA: 0x55C560
        void StartPvPBattle();  // RVA: 0x55EF30
        IEnumerator* StartPvPBattleCoroutine();  // RVA: 0x55EEC0
        void StartFriendlyPvP(PlayerSnapshot* friendSnapshot);  // RVA: 0x55E9E0
        EnemyState* GetOrRollSectorEnemy(SectorData* sector, int32_t sectorEnemyIndex);  // RVA: 0x55BE70
        EnemyState* PickEnemyForBattle(SectorData* sector, int32_t sectorEnemyIndex);  // RVA: 0x55CAE0
        int32_t PickCategoryByGaussian(int32_t categoryCount, float sectorProgress);  // RVA: 0x55C240
        EnemyColor PickColorByProgress(float sectorProgress);  // RVA: 0x55C490
        EnemyColor PickArenaColor(float waveProgress);  // RVA: 0x55C1A0
        float GetDropChanceByColor(EnemyColor color);  // RVA: 0x55BE40
        EnemyState* GeneratePvPEnemy();  // RVA: 0x55BA80
        void StartCombat(EnemyState* enemy);  // RVA: 0x55E870
        void StopCombat();  // RVA: 0x55F0B0
        void ResolvePvPAbandon(EnemyState* enemy);  // RVA: 0x55E1F0
        void HandleBattleStateChange(bool isActive);  // RVA: 0x55C100
        IEnumerator* RunCombat(PlayerStats playerStats, EnemyState* enemy);  // RVA: 0x55E6D0
        ElementCategory GetPlayerWeaponElement();  // RVA: 0x55C010
        ElementCategory GetPlayerWeapon2Element();  // RVA: 0x55BF20
        PlayerState* BuildSyntheticEnemyState(System.Collections.Generic.List<AutoBattle.Steam.EquippedItemInfo> equippedItems);  // RVA: 0x55B0D0
        CombatTurnResult* ResolveAttack(PlayerStats playerStats, EnemyState* enemy, int32_t playerHp, int32_t enemyHp, bool isAttacker, int32_t playerMaxHp);  // RVA: 0x55CED0
        IEnumerator* EndBattle(bool playerWon, EnemyState* enemy, int32_t remainingPlayerHp);  // RVA: 0x55B5F0
        int32_t CalculatePvEXp(EnemyState* enemy, bool isDefeat);  // RVA: 0x55B530
        ItemInstance* GenerateDropItem(EnemyState* enemy);  // RVA: 0x55B850
        ItemInstance* GenerateArenaMilestoneDrop();  // RVA: 0x55B6A0
        ItemInstance* GenerateSectorCompletionBonus();  // RVA: 0x55BCE0
        void .ctor();  // RVA: 0x55F3E0
    };

    // Namespace: AutoBattle.Combat
    class CombatResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool playerWon; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t xpGained; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        ItemInstance* droppedItem; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int32_t remainingPlayerHp; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        bool sectorCleared; // 0x0024
        bool isPvP; // 0x0025
        uint8_t pad_0026[0x2]; // 0x0026
        Il2CppString* enemyName; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int32_t rpDelta; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t healAmount; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        ItemInstance* sectorBonusItem; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool leveledUp; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        int32_t newLevel; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        int32_t levelsGained; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        ItemInstance* levelUpItem; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        bool isArenaMode; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        int32_t arenaWave; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        int32_t arenaKillCount; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        bool arenaWaveMilestone; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        int32_t arenaMaxWave; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        bool arenaActivated; // 0x006C
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.Combat
    class PendingAttackMod
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t remaining; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        float bonusDamagePct; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t bonusDamageFlat; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float ignoreEnemyDefPct; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float overrideCritPct; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float critBonusPct; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        bool ignoreDefFully; // 0x0028
        bool tripleDamage; // 0x0029
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.Combat
    class EveryNAttacksEffect
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t everyN; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PendingAttackMod* modTemplate; // 0x0018
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.Combat
    class EveryNCritsEffect
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t everyN; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PendingAttackMod* modTemplate; // 0x0018
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.Combat
    class CombatRuntimeEffects
    {
    public:
        // Static fields
        // static int32_t SUDDEN_DEATH_THRESHOLD_TURNS;
        // static int32_t SUDDEN_DEATH_ESCALATION_TURNS;
        // static float SUDDEN_DEATH_ESCALATION_PCT;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<AutoBattle.Core.StatsCalculator.BelowHpEffect> belowHpEffects; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t onCritHealAmount; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float onCritLifestealPct; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t onParryHealAmount; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float firstHitAbsorbFraction; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int32_t firstHitCounterDamage; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String>> everyNHitsTaken; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float enemyCritDamageMultiplier; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Int32,System.String>> everyNSecTempBuffs; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Single[][] nextTempBuffAt; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Int32[][] currentTempBuffStack; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Int32[][] everyNSecMaxStack; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        int32_t tempBuffAtk; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        int32_t tempBuffDef; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        int32_t tempBuffHp; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float tempBuffCritPct; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float tempBuffParryPct; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> pendingAttackMods; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Collections.Generic.List<AutoBattle.Combat.EveryNAttacksEffect> everyNAttacksEffects; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Int32[][] nextEveryNAttacksFireAt; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        System.Collections.Generic.List<AutoBattle.Combat.EveryNCritsEffect> everyNCritsEffects; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Int32[][] nextEveryNCritsFireAt; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> enemyDefDebuffs; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> onCritEnemyDefDebuffDescriptors; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        int32_t onCritBonusDamage; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> onCritPendingModTemplates; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> onParryPendingModTemplates; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> tempDefTimedBuffs; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> onParryDefTimedDescriptors; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> onCritDefTimedDescriptors; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        int32_t firstHitHeal; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        float firstHitPermanentAtkPct; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        bool firstHitPermanentAtkActive; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        int32_t playerAttacksMade; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        int32_t playerCritsLanded; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        int32_t playerHitsTaken; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        bool firstHitConsumed; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        float combatElapsedSec; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        Int32[][] hitTriggerCounters; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        bool suddenDeathArmed; // 0x0108
        bool suddenDeathActive; // 0x0109
        bool isPvP; // 0x010A
        uint8_t pad_010B[0x1]; // 0x010B
        int32_t turnsElapsed; // 0x010C
        uint8_t pad_010D[0x3]; // 0x010D
        float permanentDefAcquiredPct; // 0x0110
    
        // Methods
        static CombatRuntimeEffects* BuildForCombat(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, bool isPvP);  // RVA: 0x55F870
        PendingAttackMod* AggregatePendingMods();  // RVA: 0x55F680
        void ConsumePendingMods();  // RVA: 0x560160
        void TickEveryNAttacksAndPush();  // RVA: 0x561510
        void TickEveryNCritsAndPush();  // RVA: 0x561690
        void PushOnCritPendingMods();  // RVA: 0x560C60
        void PushOnParryPendingMods();  // RVA: 0x560EA0
        static PendingAttackMod* CloneModTemplate(PendingAttackMod* src);  // RVA: 0x5600C0
        void PushOnCritEnemyDefDebuff();  // RVA: 0x560A80
        int32_t GetActiveEnemyDefReduction();  // RVA: 0x560230
        void PushTimedDefBuffOnParry();  // RVA: 0x5612C0
        void PushTimedDefBuffOnCrit();  // RVA: 0x5610E0
        int32_t GetActiveTimedDefBuff();  // RVA: 0x560320
        void TickTemporaryBuffs();  // RVA: 0x561810
        System.ValueTuple<System.Single,System.Single,System.Single,System.Int32,System.Single> GetBelowHpAggregate(int32_t currentHp, int32_t maxHp);  // RVA: 0x560410
        System.ValueTuple<System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.ValueTuple<System.Boolean,System.Single>> GetBelowHpExtendedAggregate(int32_t currentHp, int32_t maxHp);  // RVA: 0x5606A0
        Il2CppString* CheckEveryNHitsTakenAndConsume();  // RVA: 0x55FED0
        float StepTurnAndGetDamageMultiplier();  // RVA: 0x5614A0
        void .ctor();  // RVA: 0x561A90
    };

    // Namespace: AutoBattle.Combat
    class CombatTurnResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isPlayerAttacking; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* attackerName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* defenderName; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int32_t damage; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool isCrit; // 0x002C
        bool isParried; // 0x002D
        uint8_t pad_002E[0x2]; // 0x002E
        int32_t attackerHpAfter; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t defenderHpAfter; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        ElementCategory weaponElement; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        ElementCategory weapon2Element; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        int32_t healFromEffect; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool suddenDeathActive; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        int32_t counterAttackDamage; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        int32_t enemyHealFromEffect; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        int32_t enemyCounterAttackDamage; // 0x0050
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

    // Namespace: AutoBattle.Combat
    class EnemyState
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* name; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* categoryName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* icon; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        EnemyColor color; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int32_t hp; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        int32_t maxHp; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float atk; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float def; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float crit; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float parry; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        int32_t level; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        bool isPvP; // 0x0048
        bool isFriendlyPvP; // 0x0049
        bool isBifidus; // 0x004A
        uint8_t pad_004B[0x1]; // 0x004B
        int32_t xpWin; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        int32_t xpLose; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float dropChance; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        System.Collections.Generic.List<AutoBattle.Steam.EquippedItemInfo> pvpEquippedItems; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Il2CppString* pvpPlayFabId; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        int64_t pvpLastUpdatedTicks; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        int32_t pvpCharacterType; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float pvpBattleTime; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        int32_t pvpRankingPoints; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        ElementCategory pvpWeaponElement; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        ElementCategory pvpWeapon2Element; // 0x0080
    
        // Methods
        void .ctor();  // RVA: 0x4BD420
    };

} // namespace AutoBattle.Combat

// Namespace: <global>
struct __StaticArrayInitTypeSize=12
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=16
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=20
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=32
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=4499
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=5484
{
public:
};

// Namespace: <global>
class <PrivateImplementationDetails>
{
public:
    // Static fields
    // static __StaticArrayInitTypeSize=20 376326C78425410A24361EBE9BEAC70517D3FD3FA0C47072BFA401ACD395F04A;
    // static __StaticArrayInitTypeSize=32 3CC2A930571C60EE0CFE0686365C3093E362E6833C5C7F1FD4F36C687C78BBA5;
    // static __StaticArrayInitTypeSize=12 6AB9C293C18AC9C469B52BD1BB0A68DA18711BA94E45EA6E0BF79CE96CFEFD0F;
    // static __StaticArrayInitTypeSize=12 8BC5D7ED3909D5F0600333A11D97106D1724D34B786E92D842690E9E3052E409;
    // static __StaticArrayInitTypeSize=4499 965219CC92064C5EDCD2AAA9D0716F76D231D8DA668839AD2D0A32067CC829E6;
    // static __StaticArrayInitTypeSize=16 BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
    // static __StaticArrayInitTypeSize=5484 C2C05CCE9607873249E82C10BC92FD1AB829899A2E9E196C19164F0AA8421D56;
    // static __StaticArrayInitTypeSize=12 E0D9C10695DB9FD9B31B106A9DF5D6599FE0A6D641E18B7628DC7DC32BD57613;


    // Methods
    static uint32_t ComputeStringHash(Il2CppString* s);  // RVA: 0x4BD720
};

