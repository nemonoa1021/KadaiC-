#include <stdio.h>

	/*
	���z�֐�
	�p�����̃N���X�̊֐������z�֐��ɂ��Ă����ƁA
	�p����ŏ��������������邱�Ƃ��ł���B
	// ���z�֐��ɂ��Ȃ��ꍇ
	class ParentClass
	{
		public:
		ParentClass() {}
		void Print(){ printf("Parent\n"); }
	};
	class ChildClass : public ParentClass
	{
		public:
		ChildClass() {}
		void Print(){ printf("Child\n"); }
	};
	*/

	/*
	class ParentClass
	{
		public:
		ParentClass() {}
		void Print() { printf("Parent\n"); }
	};
	class ChildClass : public ParentClass
	{
		public:
		void Print() { printf("Child\n"); }
	};
	int main()
	{
		ParentClass* parent = new ParentClass();
		ParentClass* child = new ChildClass();
		parent->Print();
		child->Print();
		delete parent;
		delete child;
	}
	*/
	
	//��L�̂悤�ɁA
	//ParentClass�^�ɓ���Ă���̂ŁA
	//���RParentClass�̏������Ăяo�����B
	//���̂��߁APrint�̓��e��Parent�ƂȂ�B
	//���z�֐��ɂ���Ɠ��������ł��A
	//�p����̏������s����悤�ɂȂ�B
	//���̂��߂ɂ́Avirtual�����邱�ƂŎ�������B
	
	/*
	class ParentClass
	{
		public:
		ParentClass() {}
		virtual void Print() { printf("Parent\n"); }
	};
	class ChildClass : public ParentClass
	{
		public:
		void Print() { printf("Child\n"); }
	};
	int main()
	{
		ParentClass* parent = new ParentClass();
		ParentClass* child = new ChildClass();
		parent->Print();
		child->Print();
		delete parent;
		delete child;
	}
	*/
	
	//��L�����s����ƁA
	//Print�̌��ʂ��ς���Ă��邱�Ƃ��m�F�ł���Ǝv���܂��B
	//���̂悤�ɁA�������O�̊֐��ł��邪�A
	//�p���悲�ƂɈႤ�U�镑���������邱�Ƃ��A
	//�|�����[�t�B�Y���Ƃ����܂��B
	

	
	//�ȉ��̂悤��CalcAdd�N���X���쐬���p�����A
	//Calc�������Z���s���悤�ɂ���CalcSub�N���X���쐬���Ă��������B
	
	/*
	class CalcAdd
	{
		public:
		virtual int Calc(int x, int y)
		{
			int ans;
			ans = x + y;
			printf("%d + %d = %d\n", x, y, ans);
			return ans;
		}
	};
	class CalcSub : public CalcAdd
	{
		public:
		int Calc(int x, int y)
		{
			int ans;
			ans = x - y;
			printf("%d - %d = %d\n", x, y, ans);
			return ans;
		}
	};
	int main()
	{
		CalcAdd add;
		CalcSub sub;
		add.Calc(10, 5);
		sub.Calc(10, 5);
	}
	*/

	
	//�킴�킴��L�̂悤�ȕϐ��̐錾�̂����͂��Ȃ��A
	//�Ǝv����������܂��񂪁A
	//�Ⴆ�Ί֐��ɓn���悤�ȏꍇ�́A
	//�|�C���^�Ŏ󂯎��̂ŁA
	//���z�֐��ō���Ă����Ȃ��ƁA
	//�]�񂾌��ʂ������Ȃ��ꍇ������̂ŁA
	//�p����ł��ꂼ�ꋓ����ς������ꍇ�́A
	//���z�֐��ō��悤�ɂ��܂��傤�B
	
	
	//Object�N���X���p�����āAPlayer,Enemy�����
	/*
	class Object
	{
		public:
		Object() {}
		virtual ~Object() { printf("Exec Object Destructor.\n");  }
		public:
		virtual void Update() {}
	};
	class Player : public Object
	{
		public:
		Player() {}
		~Player() { printf("Exec Player Destructor.\n"); }
		public:
		void Update() { printf("Player Update.\n");  }
	};
	class Enemy : public Object
	{
		public:
		Enemy() {}
		~Enemy() { printf("Exec Enemy Destructor.\n"); }
		public:
		void Update() { printf("Enemy Update.\n"); }
	};
	void DoUpdate(Object * obj)
	{
		obj->Update();
	}
	int main()
	{
		Player player;
		Enemy enemy;
		DoUpdate(&player);
		DoUpdate(&enemy);
	}
	*/
	
	//���̂悤�ɉ��z�֐�������Ă���΁A
	//DoUpdate��Player�N���X���AEnemy�N���X��Update���Ăяo����B
	//�������Ă��Ȃ������ꍇ�A
	//DoPlayerUpdate�֐���DoEnemyUpdate�֐������Ȃ���΂Ȃ�Ȃ��Ȃ�܂��B
	//(������Object�N���X���p���������̂𑝂₵���ꍇ�A
	//�����Ɗ֐��𑝂₳�Ȃ���΂Ȃ�Ȃ�)
	//���̂悤�Ɍp�����ŉ��z�֐���p�ӂ��Ă����΁A
	//�p������n���Ă��p����̏������s�����Ƃ��ł��A
	//�����̊Ǘ����ƂĂ��ȒP�ɂȂ�܂��B
	

	
	//TIPS:
	//�Ƃ肠�����f�X�g���N�^�ɂ�virtual�����悤
	//�p����̃f�X�g���N�^�����s����Ȃ��ꍇ������̂ŁA
	//�p�����̃f�X�g���N�^�ɂ�virtual�����Ă����܂��傤�B
	//virtual�����Ă����Čp�������Ȃ������ꍇ�ł��A
	//��肪�N���邱�Ƃ͂Ȃ��̂ŁA
	//���S�̂��߂ɂƂ肠����virtual�����Ă����Ă����ł��B
	
	
	// ChildClass�̃f�X�g���N�^���Ă΂�Ȃ�
	/*
	class ParentClass
	{
		public:
		ParentClass() {}
		~ParentClass() { printf("Exec ParentClass Destructor.\n"); }
		virtual void Print() { printf("Parent\n"); }
	};
	class ChildClass : public ParentClass
	{
		public:
		ChildClass() {}
		~ChildClass() { printf("Exec ChildClass Destructor.\n"); }
		void Print() { printf("Child\n"); }
	};
	int main()
	{
		ParentClass* parent = new ParentClass();
		ParentClass* child = new ChildClass();
		parent->Print();
		child->Print();
		delete parent;
		delete child;
	}
	*/

	// �f�X�g���N�^��virtual������ƌĂяo�����B

	/*
	class ParentClass
	{
		public:
		ParentClass() {}
		virtual ~ParentClass() { printf("Exec ParentClass Destructor.\n"); }
		virtual void Print() { printf("Parent\n"); }
	};
	class ChildClass : public ParentClass
	{
		public:
		ChildClass() {}
		~ChildClass() { printf("Exec ChildClass Destructor.\n"); }
		void Print() { printf("Child\n"); }
	};
	int main()
	{
		ParentClass* parent = new ParentClass();
		ParentClass* child = new ChildClass();
		parent->Print();
		child->Print();
		delete parent;
		delete child;
	}
	*/



	//�y���z
	//�O��쐬����PoliceCar���C�����Ă��������B
	//�C�����e��Car��SetAcceleration�̏���Ɖ����̒l��(-100,50)��
	//�ύX����-10�ȉ��A5�ȏオ�ݒ�ł���悤�ɂ��Ă��������B
	//���̎�SetAcceleration��virtual�����ď������������Ă��������B
	/*
	class Car
	{
		public:
	    Car();
	    virtual void    SetAcceleration(float _a);
	    float           GetSpeed() const;
	
	    // public�������̂ŃA�N�Z�X�w��q��ύX����Ӗ������͂Ȃ����A
	    // ��̃u���b�N��public��Set,Get�ł��������public�͏����n��
	    // �܂Ƃ߂��u���b�N�Ƃ��ĕ����Č��₷�����Ă���B
		public:
	    void    Update();
	
		private:
	    void    setSpeed(float _s); // ���x�͉����x��p�����v�Z�ł̂ݕύX�ł���悤�ɂ������̂ŁA
	                                // private�ɂ��Ă����B
		protected:
	    float   acceleration;
		private:
	    float   speed;
	};
	
	class PoliceCar : public Car
	{
		public:
	    PoliceCar() { sirenFlag = false; }
	
		public:
	    void SirenOn()
	    {
	        sirenFlag = true;
	        printf("�T�C�����@�\��On�ɂ��܂����B\n");
	    }
	    void SirenOff()
	    {
	        sirenFlag = false;
	        printf("�T�C�����@�\��Off�ɂ��܂����B\n");
	    }
	    virtual void    SetAcceleration(float _a);
		private:
	    bool    sirenFlag;
	};
	
	
	
	// �R���X�g���N�^
	Car::Car()
	{
	    acceleration = speed = 0.0f;
	}
	
	//
	void Car::SetAcceleration(float _a)
	{
	    if (_a < -10 || _a > 5)
	    {
	        printf("SetAcceleration Error\n");
	        return;
	    }
	    acceleration = _a;
	}
	
	
	float Car::GetSpeed() const
	{
	    return speed;
	}
	
	
	void Car::Update()
	{
	    setSpeed(acceleration);
	}
	
	
	void Car::setSpeed(float _s)
	{
	    float tmpSpeed = speed + _s;
	    if (tmpSpeed < -30 || tmpSpeed > 200)
	    {
	        printf("setSpeed Error.\n");
	        return;
	    }
	    speed = tmpSpeed;
	}
	
	
	void PoliceCar::SetAcceleration(float _a)
	{
	    if (_a < -100 || _a > 50)
	    {
	        printf("SetAcceleration Error\n");
	        return;
	    }
	    acceleration = _a;
	}
	
	int main()
	{
	    PoliceCar policeCar;
	    Car* car = &policeCar;
	
	    policeCar.SirenOn();
	    policeCar.SirenOff();
	
	
	    // �������Car�̋@�\�����ׂĎg���� 
	    car->SetAcceleration(50.0f);
	
	    for (int i = 0; i < 100; ++i)
	    {
	        car->Update();
	        printf("Speed = %f\n", car->GetSpeed());
	    }
	    car->SetAcceleration(-0.1f);
	
	    for (int i = 0; i < 100; ++i)
	    {
	        car->Update();
	        printf("Speed = %f\n", car->GetSpeed());
	    }
	
	}
	*/
#pragma endregion
	//Object�N���X
	//x, y, z���W��ۑ�����ϐ��AUpdate�֐������B
	//Update�֐���virtual�ō���Ă��������B

	//Vehicle(��蕨)�N���X
	//Object�N���X���p�������N���X�B
	//�����ł�setSpeed�֐���ǉ����Ă��������B
	//�܂�speed��accel�̕ϐ��������Œǉ����Ă��������B
	//setSpeed�֐���virtual�ō���Ă��������B
	//(���m�ȑ��x�̏������s�������ꍇ�́A�����Ɖ����x�ŁA
	//	�x�N�g�����v�Z������@�ł��\���܂���B)

	//Car(��)�N���X
	//Vehicle�N���X���p�������N���X
	//Speed�̕ύX��������Car�p�Ɏ������Ă��������B

	//����𗝉�����Ƃ����Ӗ��ŁA
	//���̐e�N���X����h���N���X������Ă����Ăق����̂ŁA
	//���̌v�Z������f�[�^�̐ݒ�̎d���́A
	//�K���ɍs���Ă�����Č��\�ł��B

	//�܂��A���̃N���X�͕K����o���Ă��������B
	//���тɉ������܂��B

	//���Ԃ�����΁A
	//Vehicle�N���X���p�����āA
	//bicycle(���]��)��bike(�I�[�g�o�C)
	//�Ƃ������N���X�̍쐬��A
	//Car������Ɍp������police car��Atruck�Ȃǂ�
	//�N���X���쐬���Ă݂Ă��������B
	class Object
	{
		public:
		virtual void Update()
		{
			printf("x = %f\n", x);
			printf("y = %f\n", y);
			printf("z = %f\n", z);
		};

		float x = 0;
		float y = 0;
		float z = 0;
	};

	class Vehicle : public Object
	{
		public:
		virtual void setSpeed()
		{
			speed += accel;
		}
		virtual void Update()
		{
			printf("x=%f\n", speed);
		}

		float speed = 0;
		float accel = 0;
	};
	class Car : public Vehicle
	{
		private:
		public:
		Car()
		{
			speed = 1;
			accel = 10;
		}
		void Update()
		{
			Vehicle::Update();
		}
	};
	int main()
	{
		Car car;
		for (int i = 0; i < 100; i++)
		{
			car.setSpeed();
			car.Update();
		}
	}