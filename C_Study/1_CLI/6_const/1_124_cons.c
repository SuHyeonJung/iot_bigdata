//#include <stdio.h>  <== Standard IO (ex: printf, scanf�� ����� �� ����.)

void main(){
		int military_serial_number=3493458482; // military_serial_number: ����, 3493458482: ���
		int my_birth_day=123456;
		// const�� constant�� �ǹ��Ѵ�.
		const int ci_military_serial_number=3493458482; // ci const int�� �ǹ�
		const int ci_my_birth_day=1234567890123; // ci_my_birth_day: const
      
	    // ���� �ٲ��� �ʰ� ������ �ϰ����ϴ� ������ �����ʹ�
	    // ���� �ٲٴ� ���� ��ü�� ������ ����ų �� �ִ�.	
		military_serial_number=4657891321;
        my_birth_day=123458;
		my_birth_day++;
		
		ci_military_serial_number=4657891322;
        ci_my_birth_day=123457;
		ci_my_birth_day++;
}
